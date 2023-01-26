/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:38:51 by edos-san          #+#    #+#             */
/*   Updated: 2023/01/26 11:38:52 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "vector/vector.hpp"
int main()
{
    // Create a vector containing integers
    std::vector<int> v;
    //ft::vector<int> s = {7, 5, 16, 8};
    // Add two more integers to vector
    v.push_back(25);
    v.push_back(13);


    // Print out the vector
    std::cout << "v = { ";
    for (int n = 0; n < v.size(); n++)
        std::cout << n << ", ";
    std::cout << "}; \n";
}