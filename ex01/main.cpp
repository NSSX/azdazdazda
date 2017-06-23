#include "span.hpp"

int main(void){


    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::cout << "More Test----------------"<<std::endl;
    Span mySpan(4);

    try{
        mySpan.addNumber(15);
        std::cout << "size mySPAN : " << mySpan.getSize() << std::endl;
        mySpan.addNumber(11);
        std::cout << "size mySPAN : " << mySpan.getSize() << std::endl;
        mySpan.addNumber(18);
        std::cout << "size mySPAN : " << mySpan.getSize() << std::endl;
        mySpan.addNumber(23);
        std::cout << "size mySPAN : " << mySpan.getSize() << std::endl;
        mySpan.addNumber(14);
        std::cout << "size mySPAN : " << mySpan.getSize() << std::endl;
    } catch(std::string error){
        std::cout << "ERROR : " << error << std::endl;
    }

    try{
        int shortestSpan = mySpan.shortestSpan();
        std::cout << "Shortest Span : " << shortestSpan << std::endl;
        Span mySpan2(1);
        shortestSpan = mySpan2.shortestSpan();
    }catch(std::string error){
        std::cout << "ERROR : " << error << std::endl;
    }

    try{
        int longestSpan = mySpan.longestSpan();
        std::cout << "Longest Span : " << longestSpan << std::endl;
        Span mySpan2(1);
        longestSpan = mySpan2.longestSpan();
    }catch(std::string error){
        std::cout << "ERROR : " << error << std::endl;
    }

    return(0);
}
