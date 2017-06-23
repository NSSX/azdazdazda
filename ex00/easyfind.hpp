#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>

template<typename T>

typename T::iterator easyfind(T container, int n)
{
    typename T::iterator begin = container.begin();
    typename T::iterator end = container.end();
    while(begin != end){
        if(*begin == n){
            return begin;
        }
        begin++;
    }
    throw  std::string("OCCURENCE NOT FOUND");
}
#endif
