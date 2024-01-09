#include "easyfind.hpp"

int	main(void)
{
	std::cout << "\033[1;33mCREATING A FIRST VECTOR\033[0m" << std::endl;
	try
	{
		std::vector<int>	list(10000);
		for (int i = 0; i < 10000; i++)
			list.push_back(i);
		std::cout << "value : " << *easyfind(list, 9999) << std::endl;
		std::cout << "value : " << *easyfind(list, 234) << std::endl;
		std::cout << "value : " << *easyfind(list, 42) << std::endl;
		std::cout << "value : " << *easyfind(list, 8) << std::endl;
		std::cout <<  *easyfind(list, 47654) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "\033[1;31m";
		std::cerr << e.what();
		std::cout << "\033[0m" << std::endl;
	}

	std::cout << "\033[1;33mCREATING A SECOND VECTOR\033[0m" << std::endl;
	try
	{
		std::deque<int>	list2(1000000);
		for (int i = 0; i < 1000000; i++)
			list2.push_back(i);
		std::cout << "value : " << *easyfind(list2, 999999) << std::endl;
		std::cout << "value : " << *easyfind(list2, 33534) << std::endl;
		std::cout << "value : " << *easyfind(list2, 4557) << std::endl;
		std::cout << "value : " << *easyfind(list2, 333) << std::endl;
		std::cout << "value : " << *easyfind(list2, 42) << std::endl;
		std::cout << "value : " << *easyfind(list2, 6) << std::endl;
		std::cout <<  *easyfind(list2, 47622154) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "\033[1;31m";
		std::cerr << e.what();
		std::cout << "\033[m" << std::endl;
	}
	return (0);
}