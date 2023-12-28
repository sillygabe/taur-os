#ifndef _TAUR_INIT_LIST
#define _TAUR_INIT_LIST

#   ifndef _TAUR_BASE_TYPES
#   include "types.hpp"
#   endif

namespace std __attribute__ ((__visibility__ ("default")))
{
    template<class _E>
    class initializer_list
    {
    public:
        typedef _E 		value_type;
        typedef const _E& 	reference;
        typedef const _E& 	const_reference;
        typedef size_t 		size_type;
        typedef const _E* 	iterator;
        typedef const _E* 	const_iterator;

    private:
        iterator			_M_array;
        size_type			_M_len;

        constexpr initializer_list(const_iterator __a, size_type __l)
        : _M_array(__a), _M_len(__l) { }

    public:
        constexpr initializer_list() noexcept
        : _M_array(0), _M_len(0) { }

        constexpr size_type
        size() const noexcept { return _M_len; }

        constexpr const_iterator
        begin() const noexcept { return _M_array; }

        constexpr const_iterator
        end() const noexcept { return begin() + size(); }
    };

    template<class _Tp>
    constexpr const _Tp*
    begin(initializer_list<_Tp> __ils) noexcept
    { return __ils.begin(); }

    template<class _Tp>
    constexpr const _Tp*
    end(initializer_list<_Tp> __ils) noexcept
    { return __ils.end(); }

    
}

#endif