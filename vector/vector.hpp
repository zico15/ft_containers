/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 11:38:54 by edos-san          #+#    #+#             */
/*   Updated: 2023/01/26 12:20:18 by edos-san         ###   ########.fr       */
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
                value_type      _value;
                allocator_type  _allocator;
                size_type       _size;
                size_type		_capacity;
                pointer     	c;

        public:
            explicit vector (const allocator_type& alloc = allocator_type()): c(NULL), _size(0), _capacity(0), _allocator(alloc){

            }

            explicit vector (size_type n, const value_type& val = value_type(),  const allocator_type& alloc = allocator_type())
            :_size(n), _value(val),  _allocator(alloc), c(NULL){

            }


            template <class InputIterator>  vector (InputIterator first, InputIterator last,  const allocator_type& alloc = allocator_type()){

            }

            vector (const vector& x){

            }



            template <class InputIterator>
            void assign (InputIterator first, InputIterator last){

            }

            void assign (size_type n, const value_type& val){

            }

    };

}


#endif
