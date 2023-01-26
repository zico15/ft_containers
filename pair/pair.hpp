/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pair.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:38:58 by edos-san          #+#    #+#             */
/*   Updated: 2023/01/26 11:47:24 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CONTAINER_PAIR_HPP
#define FT_CONTAINER_PAIR_HPP


namespace ft
{
    template <typename T1, typename T2>
    struct pair {

        typedef T1	first_type;
        typedef T2	second_type;

        first_type	first;
        second_type	second;

        pair(): first(), second() {}
        pair( const first_type & first, const second_type & second ): first(first), second(second) { }
        ~pair() {}

        pair &operator = (const pair & other) {           
            first = other.first;
            second = other.second;
            return *this;
        }

        template <typename U1, typename U2>
        pair( const pair<U1, U2> & p): first(p.first), second(p.second) {}
    };

    template <typename T1, typename T2>
    bool	operator == ( const pair<T1, T2> & t1, const pair<T1, T2> & t2 ) {
        return t1.first == t2.first && t1.second == t2.second;
    }

    template <typename T1, typename T2>
    bool	operator < ( const pair<T1, T2> & t1, const pair<T1, T2> & t2 ) {
        return (t1.first < t2.first) || (t1.first == t2.first && t1.second < t2.second);
    }

    template <typename T1, typename T2>
    bool	operator != ( const pair<T1, T2> & t1, const pair<T1, T2> & t2 ) { 
        return !(t1 == t2);
    }

    template <typename T1, typename T2>
    bool	operator > ( const pair<T1, T2> & t1, const pair<T1, T2> & t2 ) { 
        return t2 < t1; 
    }

    template <typename T1, typename T2>
    bool	operator <= ( const pair<T1, T2> & t1, const pair<T1, T2> & t2 ) { 
        return !(t2 < t1);
     }

    template <typename T1, typename T2>
    bool	operator >= ( const pair<T1, T2> & t1, const pair<T1, T2> & t2 ) { 
        return !(t1 < t2); 
    }

    template <typename T1, typename T2>
    pair<T1, T2>	make_pair( T1 t1, T2 t2 ) { 
        return pair<T1, T2>(t1, t2); 
    }

}


#endif //FT_CONTAINER_PAIR_HPP
