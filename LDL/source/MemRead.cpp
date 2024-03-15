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

#include <LDL/MemRead.hpp>
#include <string.h>
#include <assert.h>

LDL_MemoryReader::LDL_MemoryReader() :
	_Buffer(NULL),
	_Total(0),
	_Position(0)
{
}

void LDL_MemoryReader::Reset(uint8_t* buffer, size_t total)
{
	assert(buffer != NULL);
	assert(total > 0);

	_Buffer = buffer;
	_Total  = total;
}

size_t LDL_MemoryReader::Read(void* dest, size_t bytes)
{
	size_t result = 0;

	if (_Position + bytes <= _Total)
	{
		memcpy(dest, &_Buffer[_Position], bytes);
		_Position += bytes;

		result = bytes;
	}

	return result;
}