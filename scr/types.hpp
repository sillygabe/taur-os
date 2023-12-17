#ifndef __TAUR_BASE_TYPES
#define __TAUR_BASE_TYPES
#define NULL 0
#endif

namespace types
{
    typedef char int8_t;
	typedef unsigned char uint8_t;
	
	typedef short int16_t;
	typedef unsigned short uint16_t;

    typedef int int32_t;
    typedef unsigned int uint32_t;

    typedef long long int64_t;
    typedef unsigned long long size_t;

    typedef char * string;

    typedef long int intptr_t;
    typedef unsigned long int uintptr_t;

    template <class T, class U>
    struct same_types
    {
        static constexpr bool value = false;
    };

    template <class T>
    struct same_types<T, T>
    {
        static constexpr bool value = true;
    };
} 
