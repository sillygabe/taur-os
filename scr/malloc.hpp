#ifndef __TAUR_MALLOC
#define __TAUR_MALLOC
#endif

#ifndef __TAUR_BASE_TYPES
#include "types.hpp"
#endif

namespace mem 
{
    types::size_t align(types::size_t n) {
        return (n + sizeof(types::intptr_t) - 1) & ~(sizeof(types::intptr_t) - 1);
    }

    typedef struct __chunk
    {
        types::size_t size;
        bool used;
        memory_chunk *prev;
        types::intptr_t data[1];
    } memory_chunk;

    
}