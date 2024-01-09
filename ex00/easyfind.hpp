#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>
# include <vector>
# include <iostream>
# include <string>
# include <map>
# include <stack>

template <typename T>
typename T::iterator easyfind(T & content, int const nbr)
{
	if(!*std::find(content.begin(), content.end(), nbr))
		throw std::length_error("no match found in the list");
	return (std::find(content.begin(), content.end(), nbr));
}
#endif