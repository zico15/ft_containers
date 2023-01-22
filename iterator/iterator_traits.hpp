//
// Created by edos-san on 1/22/23.
//

#ifndef FT_CONTAINERS_ITERATOR_TRAITS_HPP
#define FT_CONTAINERS_ITERATOR_TRAITS_HPP

namespace ft
{
    /// Partial specialization for pointer types.
    template<typename _Tp>
    struct iterator_traits<_Tp*>
    {
        typedef _Tp                         value_type;
        typedef ptrdiff_t                   difference_type;
        typedef _Tp*                        pointer;
        typedef _Tp&                        reference;

        difference_type 	Iter::difference_type
        value_type 	Iter::value_type
        pointer 	Iter::pointer
        reference 	Iter::reference
        iterator_category 	Iter::iterator_category
    };

    /// Partial specialization for const pointer types.
    template<typename _Tp>
    struct iterator_traits<const _Tp*>
    {
        typedef random_access_iterator_tag iterator_category;
        typedef _Tp                         value_type;
        typedef ptrdiff_t                   difference_type;
        typedef const _Tp*                  pointer;
        typedef const _Tp&                  reference;
    };

}

#endif //FT_CONTAINERS_ITERATOR_TRAITS_HPP
