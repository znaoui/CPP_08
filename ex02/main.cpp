#include "MutantStack.hpp"
#include <list>

int main()
{
	try
	{
		std::cout << "\033[1;33mResult for the MutantStack: \033[0m" << std::endl;
		MutantStack<int> mstack;
		mstack.push(14);
		mstack.push(05);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(14);
		mstack.push(05);
		mstack.push(1997);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	catch(const std::exception& e)
	{
		std::cout << "\033[1;31m";
		std::cerr << e.what();
		std::cout << "\033[0m" << std::endl;
	}
        
	try
	{
		std::cout << std::endl << "\033[1;33mResult for a simple list: \033[0m" << std::endl;
        std::list<int> list;
        list.push_front(14);
        list.push_front(05);
        std::cout << list.front() << std::endl;
        list.pop_front();
        std::cout << list.size() << std::endl;
        list.push_back(14);
        list.push_back(05);
        list.push_back(1997);
        list.push_back(0);
        std::list<int>::iterator it2 = list.begin();
        std::list<int>::iterator ite2 = list.end();
        ++it2;
        --it2;
        while (it2 != ite2)
        {
            std::cout << *it2 << std::endl;
            ++it2;
        }

	}
	catch(const std::exception& e)
	{
		std::cout << "\033[1;31m";
		std::cerr << e.what();
		std::cout << "\033[0m" << std::endl;
	}

	return 0;
}