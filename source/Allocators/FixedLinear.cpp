#include <LDL/Allocators/FixedLinear.hpp>
#include <assert.h>

LDL::Allocators::FixedLinear::FixedLinear(size_t bytes, LDL::Allocators::Allocator* allocator):
	_Capacity(bytes),
	_Position(0),
	_Content(NULL),
	_Allocator(allocator)
{
	if (_Allocator)
		_Content = (uint8_t*)_Allocator->Allocate(_Capacity);
	else
		_Content = new uint8_t[_Capacity];
}

LDL::Allocators::FixedLinear::~FixedLinear()
{
	if (_Allocator)
		_Allocator->Deallocate(_Content);
	else
		delete[] _Content;
}

void* LDL::Allocators::FixedLinear::Allocate(size_t bytes)
{
	assert(bytes > 0);

	assert(_Position + bytes <= _Capacity);

	void* result = _Content + _Position;

	_Position += bytes;

	return result;
}

void LDL::Allocators::FixedLinear::Deallocate(void* ptr)
{
}

size_t LDL::Allocators::FixedLinear::UsedBytes()
{
	return _Position;
}

void LDL::Allocators::FixedLinear::Reset()
{
	_Position = 0;
}