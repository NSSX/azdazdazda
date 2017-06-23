#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>

class Span {
	public :
		Span(unsigned int n);
		void	addNumber(unsigned int i);
		int		shortestSpan();
		int		longestSpan();
        virtual ~Span(void);
        int getSize();
		Span & operator=(Span const &rhs);
		Span(Span const &src);
    private :
        std::vector<int> allValue;
        unsigned int maxInt;
        Span(void);
};

#endif
