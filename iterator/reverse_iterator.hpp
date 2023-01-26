/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_iterator.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 11:39:34 by edos-san          #+#    #+#             */
/*   Updated: 2023/01/26 12:20:15 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CONTAINERS_REVERSE_ITERATOR_HPP
#define FT_CONTAINERS_REVERSE_ITERATOR_HPP

#include "iterator_traits.hpp"

namespace ft
{

    template <class Iterator>
    class reverse_iterator {

    private:
        typedef reverse_iterator	type;

    public:
        typedef Iterator												iterator_type;
        typedef typename iterator_traits<Iterator>::iterator_category	iterator_category;
        typedef typename iterator_traits<Iterator>::value_type			value_type;
        typedef typename iterator_traits<Iterator>::difference_type		difference_type;
        typedef typename iterator_traits<Iterator>::pointer				pointer;
        typedef typename iterator_traits<Iterator>::reference			reference;

    protected:
        iterator_type	current;

    public:
        explicit reverse_iterator( iterator_type it ) : current(it) {  }


        template <typename U>
        reverse_iterator( reverse_iterator<U> const & src ) { *this = src; }
        template <typename U>
        type &	operator = ( reverse_iterator<U> const & rhs ) { current = rhs.base(); return *this; }

        ~reverse_iterator( void ) { }
        type &	operator ++ ( void ) {
            --current; return *this;
        }
        type	operator ++ ( int ) {
            type tmp(*this); operator++(); return tmp;
        }

        pointer		operator -> ( void ) const {
            return &(operator*());
        }

        reference	operator * ( void ) const {
            iterator_type tmp = current; return *--tmp;
        }

        reverse_iterator( void ) : current(iterator_type()) {}

        type &	operator -- ( void ) {
            ++current; return *this;
        }
        type	operator -- ( int ) {
            type tmp(*this); operator--(); return tmp;
        }

        type			operator + ( difference_type n ) const {
            return type(current - n);
        }
        type			operator - ( difference_type n ) const {
            return type(current + n);
        }

        type &	operator += ( difference_type n ) {
            current -= n; return *this;
        }
        type &	operator -= ( difference_type n ) {
            current += n; return *this;
        }

        reference	operator [] ( difference_type n ) const {
            return current[-n - 1];
        }
    };

    template< typename Iterator1, typename Iterator2 >
    bool	operator != ( const reverse_iterator<Iterator1> & lhs, const reverse_iterator<Iterator2> & rhs ){
        return lhs.base() != rhs.base();
    }

    template< typename Iterator1, typename Iterator2 >
    bool	operator < ( const reverse_iterator<Iterator1> & lhs, const reverse_iterator<Iterator2> & rhs ){
        return lhs.base() > rhs.base();
    }

    template< typename Iterator1, typename Iterator2 >
    bool	operator <= ( const reverse_iterator<Iterator1> & lhs, const reverse_iterator<Iterator2> & rhs ){
        return lhs.base() >= rhs.base();
    }

    template< typename Iterator >
    typename reverse_iterator<Iterator>::difference_type
    operator - ( const reverse_iterator<Iterator>& lhs, const reverse_iterator<Iterator>& rhs ){
        return rhs.base() - lhs.base();
    }

    template< typename Iterator1, typename Iterator2 >
    bool	operator == ( const reverse_iterator<Iterator1> & lhs, const reverse_iterator<Iterator2> & rhs ){
        return lhs.base() == rhs.base();
    }

    template< typename Iterator1, typename Iterator2 >
    bool	operator > ( const reverse_iterator<Iterator1> & lhs, const reverse_iterator<Iterator2> & rhs ){
        return lhs.base() < rhs.base();
    }

    template< typename Iterator1, typename Iterator2 >
    bool	operator >= ( const reverse_iterator<Iterator1> & lhs, const reverse_iterator<Iterator2> & rhs ){
        return lhs.base() <= rhs.base();
    }

    template< typename Iterator >
    reverse_iterator<Iterator>   operator + ( typename reverse_iterator<Iterator>::difference_type n,const reverse_iterator<Iterator>& it ) {
        return reverse_iterator<Iterator>(it.base() - n);
    }



}

#endif //FT_CONTAINERS_REVERSE_ITERATOR_HPP
