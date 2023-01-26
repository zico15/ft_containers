/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:38:54 by edos-san          #+#    #+#             */
/*   Updated: 2023/01/26 11:38:55 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CONTAINERS_VECTOR_HPP
#define FT_CONTAINERS_VECTOR_HPP

namespace ft
{
    template<class T, class Allocator = std::allocator<T> >
    class vector
    {
         public:

                typedef  T value_type;
                typedef  Allocator allocator_type;
                typedef  size_t size_type;
                typedef typename Allocator::pointer			pointer;
                typedef typename Allocator::const_pointer	const_pointer;
                typedef typename Allocator::reference		reference;
                typedef typename Allocator::const_reference	const_reference;
                typedef __gnu_cxx::__normal_iterator<pointer, vector> iterator;
                typedef __gnu_cxx::__normal_iterator<const_pointer, vector>  const_iterator;
                typedef std::reverse_iterator<const_iterator>	const_reverse_iterator;
                typedef std::reverse_iterator<iterator>		reverse_iterator;
        private:
                size_type size;
                value_type value;
                allocator_type allocatorType;

         public:
                explicit vector(size_type __n, const value_type& __value = value_type(), const allocator_type& __a = allocator_type()):
                size(__n), value(__value), allocatorType(__a)
                {

                }
    };

}


#endif
