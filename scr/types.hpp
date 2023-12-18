#ifndef __TAUR_BASE_TYPES
#define __TAUR_BASE_TYPES
#define NULL 0

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

    template <typename T, typename U>
    struct is_same
    {
        static constexpr bool value = false;
        constexpr operator bool() const 
        {
            return false;
        }
    };

    template <typename T>
    struct is_same<T, T>
    {
        static constexpr bool value = true;
        constexpr operator bool() const 
        {
            return true;
        }
    };

    //Bool, checks if the types are the same
    //And yes, types are accepted as parametres
    #define same_types(A, B) types::is_same<A, B>()
} 

#endif