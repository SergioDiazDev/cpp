#include <iostream>

#include "Span.hpp"

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::cout << "My test." << std::endl;
    Span x(10042);
    x.addNumber(2147483647);
    x.addNumber(-2147483648);
    x.randomFill(10040);
    std::cout << x.shortestSpan() << std::endl;
    std::cout << x.longestSpan() << std::endl;
    std::cout << "Tamaño de x: " << x.size() << std::endl;
    return 0;
}