//
// Created by edos-san on 1/22/23.
//

#ifndef FT_CONTAINERS_ITERATOR_HPP
#define FT_CONTAINERS_ITERATOR_HPP


#include <cstddef> // ptrdiff_t

namespace ft {

    template <typename Category, typename T, typename Distance = ptrdiff_t, typename Pointer = T*, typename Reference = T& >
    struct iterator {
        typedef Category  iterator_category;
        typedef T         value_type;
        typedef Distance  difference_type;
        typedef Pointer   pointer;
        typedef Reference reference;

    };


    struct input_iterator_tag { };
    struct output_iterator_tag { };
    struct forward_iterator_tag : public input_iterator_tag { };
    struct bidirectional_iterator_tag : public forward_iterator_tag { };
    struct random_access_iterator_tag : public bidirectional_iterator_tag { };


}


#endif
