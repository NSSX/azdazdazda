#include "span.hpp"
#include <algorithm>
Span::Span(unsigned int n) : allValue(), maxInt(n){

    return;
}

void	Span::addNumber(unsigned int i){
    if (allValue.size() < this->maxInt)
    {
        allValue.push_back(i);
    }
    else
    	throw std::string("Cant Add Anymore");
}

Span::Span(Span const &src){
    *this = src;
    return;
}

Span & Span::operator=(Span const &rhs)
{
    this->maxInt = rhs.maxInt;
    this->allValue = rhs.allValue;
    return(*this);
}
int Span::getSize(){

    return this->allValue.size();
}

int		Span::shortestSpan(){
    if (allValue.size() <= 1)
		throw std::string("ADD MORE VALUE TO USE SHORTESTSPAN");
    else
        std::sort(allValue.begin(), allValue.end());
	return (allValue[1] - allValue[0]);
}
int		Span::longestSpan(){
    if (allValue.size() <= 1)
        throw std::string("ADD MORE VALUE TO USE LONGESTSPAN");
    else
        std::sort(allValue.begin(), allValue.end());
    return (allValue[allValue.size() - 1] - allValue[0]);

}
Span::~Span(void){
    return;
}
