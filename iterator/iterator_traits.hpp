/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator_traits.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:39:24 by edos-san          #+#    #+#             */
/*   Updated: 2023/01/26 11:39:26 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CONTAINERS_ITERATOR_TRAITS_HPP
#define FT_CONTAINERS_ITERATOR_TRAITS_HPP

#include "iterator.hpp"

namespace ft
{
    template <typename Iter>
    struct	iterator_traits {

        typedef typename Iter::difference_type		difference_type;
        typedef typename Iter::value_type			value_type;
        typedef typename Iter::pointer				pointer;
        typedef typename Iter::reference			reference;
        typedef typename Iter::iterator_category	iterator_category;

    };

    template <typename T>
    struct	iterator_traits<T*> {
        typedef ptrdiff_t						difference_type;
        typedef T								value_type;
        typedef T*								pointer;
        typedef T&								reference;
        typedef random_access_iterator_tag		iterator_category;
    };

    template <typename T>
    struct	iterator_traits<const T*> {

        typedef ptrdiff_t						difference_type;
        typedef T								value_type;
        typedef const T*						pointer;
        typedef const T&						reference;
        typedef random_access_iterator_tag		iterator_category;

    };

}

#endif //FT_CONTAINERS_ITERATOR_TRAITS_HPP
