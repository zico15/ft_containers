/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enable_if.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:39:06 by edos-san          #+#    #+#             */
/*   Updated: 2023/01/26 11:39:11 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CONTAINERS_ENABLE_IF_HPP
#define FT_CONTAINERS_ENABLE_IF_HPP

namespace ft {
    template< bool B, class T = void >
    struct enable_if {

    };

    template<class T>
    struct enable_if<true, T> { typedef T type; };
}

#endif //FT_CONTAINERS_ENABLE_IF_HPP
