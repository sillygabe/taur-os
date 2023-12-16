#ifndef __TAUR_MALLOC
#define __TAUR_MALLOC
#endif

#ifndef __TAUR_BASE_TYPES
#include "types.hpp"
#endif

namespace malloc 
{
    typedef struct __chunk
    {
        types::size_t size;
        bool used;
        memory_chunk *prev;
        types::uintptr_t data[1];
    } memory_chunk;
}