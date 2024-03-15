/*
Boost Software License - Version 1.0 - August 17th, 2003

Permission is hereby granted, free of charge, to any person or organization
obtaining a copy of the software and accompanying documentation covered by
this license (the "Software") to use, reproduce, display, distribute,
execute, and transmit the Software, and to prepare derivative works of the
Software, and to permit third-parties to whom the Software is furnished to
do so, all subject to the following:

The copyright notices in the Software and this entire statement, including
the above license grant, this restriction and the following disclaimer,
must be included in all copies of the Software, in whole or in part, and
all derivative works of the Software, unless such copies or derivative
works are solely in the form of machine-executable object code generated by
a source language processor.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
DEALINGS IN THE SOFTWARE.
*/

#include "Structs.hpp"
#include <string.h>
#include <assert.h>

List::List() :
    Head(NULL),
    Tail(NULL)
{
}

List::~List()
{
    ListNode* tmp  = Head;
    ListNode* next = NULL;

    while (tmp) 
    {
        next = tmp->Next;
        tmp = next;
    }
}

void List::PushBack(ListNode* node)
{
    node->Next = NULL;
    node->Prev = Tail;

    if (Tail) 
    {
        Tail->Next = node;
    }
    
    Tail = node;

    if (Head == NULL) {
        Head = node;
    }
}

HashTable::HashTable(size_t length) :
    _Length(length)
{
    _Table = new List[_Length];
}

HashTable::~HashTable()
{
#if (__BORLANDC__ == 0x200)
    delete[_Length] _Table;
#else
    delete[] _Table;
#endif
}

size_t HashTable::HashLy(const char* str)
{
    unsigned int hash = 0;

    for (; *str; str++)
        hash = (hash * 1664525) + (unsigned char)(*str) + 1013904223;

    return hash;
}

HashItem* HashTable::Contains(const char* name)
{
    size_t h = HashLy(name) % _Length;

    for (ListNode* i = _Table[h].Head; i != NULL; i = i->Next)
    {
        HashItem* item = (HashItem*)i;

        if (strcmp(name, item->Key) == 0)
        {
            return item;
        }
    }

    return NULL;
}

void HashTable::Add(HashItem* item, const char* name)
{
    if (!Contains(name))
    {
        size_t h = HashLy(name) % _Length;

        strcpy(item->Key, name);

        _Table[h].PushBack(item);
    }
}

ListNode::ListNode() :
    Next(NULL),
    Prev(NULL)
{
}

HashItem::HashItem()
{
    memset(Key, 0, sizeof(Key));
}

Vector::Vector(size_t capacity, size_t elementSize) :
    _Position(0),
    _Capacity(capacity),
    _ElementSize(elementSize),
    _Content(NULL)
{
    _Content = new char[_Capacity * _ElementSize];
}

Vector::~Vector()
{
#if (__BORLANDC__ == 0x200)
    delete[_Capacity * _ElementSize] _Content;
#else
    delete[] _Content;
#endif
}

size_t Vector::Capacity()
{
    return _Capacity;
}

size_t Vector::Size()
{
    return _Position;
}

void* Vector::Get(size_t index)
{
    assert(index <= _Capacity);

    return &_Content + (index * _ElementSize);
}

void Vector::Set(size_t index, void* element)
{
    assert(index <= _Capacity);
    assert(element != NULL);

    memcpy(&_Content + (index * _ElementSize), element, _ElementSize);
}

void Vector::PushBack(void* element)
{
    assert(_Position + 1 <= _Capacity);

    Set(_Position, element);

    _Position++;
}

void Vector::Resize(size_t count)
{
    assert(count <= _Capacity);

    _Position = count;
}
