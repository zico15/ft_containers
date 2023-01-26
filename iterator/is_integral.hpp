/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_integral.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 11:39:19 by edos-san          #+#    #+#             */
/*   Updated: 2023/01/26 12:20:10 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CONTAINERS_IS_INTEGRAL_HPP
#define FT_CONTAINERS_IS_INTEGRAL_HPP

namespace ft {


    template <typename T, T v>
    struct integral_constant {
        static const T	                    value = v;
        typedef T                           value_type;
        typedef integral_constant<T, v>		type;
        operator value_type() const {
            return value;
        }
    };

    typedef integral_constant<bool, true> true_type;
    typedef integral_constant<bool, false> false_type;

    template <typename T>
    struct is_integral : false_type {};

    template <>
    struct is_integral<bool> : true_type { };

    template <>
    struct is_integral<char> : true_type {};

    template <>
    struct is_integral<signed char> : true_type {};

    template <>
    struct is_integral<unsigned char> : true_type {};

    template <>
    struct is_integral<wchar_t> : true_type {};

    template <>
    struct is_integral<short> : true_type { };

    template <>
    struct is_integral<unsigned short> : true_type { };

    template <>
    struct is_integral<int> : true_type { };

    template <>
    struct is_integral<unsigned int> : true_type { };

    template <>
    struct is_integral<long> : true_type { };

    template <>
    struct is_integral<long long> : true_type { };

    template <>
    struct is_integral<unsigned long> : true_type {};

    template <>
    struct is_integral<unsigned long long> : true_type { };

}

#endif //FT_CONTAINERS_IS_INTEGRAL_HPP
