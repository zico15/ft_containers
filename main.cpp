/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 11:38:51 by edos-san          #+#    #+#             */
/*   Updated: 2023/01/26 12:21:20 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "vector/vector.hpp"

#ifndef NAMESPACE
# define NAMESPACE std
#endif

//std::vector::vector
void test_vector_std ()
{
    // constructors used in the same order as described above:
    NAMESPACE::vector<int> first;                                // empty vector of ints
    NAMESPACE::vector<int> second (4,100);                       // four ints with value 100
    NAMESPACE::vector<int> third (second.begin(),second.end());  // iterating through second
    NAMESPACE::vector<int> fourth (third);                       // a copy of third

    // the iterator constructor can also be used to construct from arrays:
    int myints[] = {16,2,77,29};
    NAMESPACE::vector<int> fifth (myints, myints + sizeof(myints) / sizeof(int) );

    NAMESPACE::cout << "The contents of fifth are:";
    for (std::vector<int>::iterator it = fifth.begin(); it != fifth.end(); ++it)
        std::cout << ' ' << *it;
    NAMESPACE::cout << '\n';
}

int main()
{
    test_vector_std();
}