#ifndef ITER_HPP
# define ITER _HPP

# include <iostream>

template <typename Iter>
void	iter(Iter *addr, int len, void(*f)(Iter &ref))
{
	if (addr == NULL || len == 0 || f == NULL)
		return ;
	for (int i = 0; i < len; i++)
		f(addr[i]);
}

template <typename Print>
void	print(Print src)
{
	std::cout << src << std::endl;
}

#endif