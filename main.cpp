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

    std::iterator_traits;
    // Print out the vector
    std::cout << "v = { ";
    for (int n = 0; n < v.size(); n++)
        std::cout << n << ", ";
    std::cout << "}; \n";
}