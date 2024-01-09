#include "Span.hpp"

int main()
{
	std::cout << "\033[1;33mCREATING A SPAN WITH 5 NUMBERS\033[0m" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << std::endl << "\033[1;33mShortest Span: \033[0m";
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << "\033[1;33mLongest Span: \033[0m";
	std::cout << sp.longestSpan() << std::endl;
	try
	{
		std::cout << std::endl << "\033[1;33mTrying to add more than 5 numbers:\033[0m" << std::endl;
		sp.addNumber(11);
	}
	catch(const std::exception& e)
	{
		std::cout << "\033[1;31m";
		std::cerr << e.what();
		std::cout << "\033[0m" << std::endl;
	}
	std::cout << std::endl << "\033[1;33mCREATING A VECTOR WITH 25000 NUMBERS\033[0m" << std::endl;
	std::vector <int> vect;
	for (int i = 0; i < 25000; i++)
	{
		vect.push_back(i);
	}
	Span test = Span(25000);
	test.addNumber(vect.begin(), vect.end());
	std::cout << std::endl << "\033[1;33mShortest Span: \033[0m";
	std::cout << test.shortestSpan() << std::endl;
	std::cout << "\033[1;33mLongest Span: \033[0m";
	std::cout << test.longestSpan() << std::endl;
	return (0);
}