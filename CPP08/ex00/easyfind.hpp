#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>
# include <vector>

template<typename T>
typename T::iterator	easyfind(T &container, const int toFind)
{
	return (std::find(container.begin(), container.end(), toFind));
}

template<typename T>
typename T::const_iterator	easyfind(const T &container, const int toFind)
{
	return (std::find(container.begin(), container.end(), toFind));
}

#endif