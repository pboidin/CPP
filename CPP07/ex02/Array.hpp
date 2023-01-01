#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
	private:
		T				*_array;
		unsigned int	_size;
	public:
		Array(void) : _array(new T[0]), _size(0) {};
		Array(unsigned int n) : _array(new T[n]), _size(n) {};
		Array(const Array &src) { *this = src; };
		~Array() {delete [] _array; };
		Array			&operator=(const Array &src)
		{
			T	*newArray = new T[src._size];
			for (unsigned int i = 0; i < src._size; ++i)
				newArray[i] = src[i];
			this->_array = newArray;
			this->_size = src._size;
			return (*this);
		};

		T				&operator[](const unsigned int i)
		{
			if (i < 0 || i >= this->_size)
				throw Array::IndexOutOfRangeException();
			return (this->_array[i]);
		}
		const T			&operator[](const unsigned int i) const
		{
			if (i < 0 || i >= this->_size)
				throw Array::IndexOutOfRangeException();
			return (this->_array[i]);
		}
		unsigned int	size(void) const { return this->_size; };

		class IndexOutOfRangeException : public std::exception
		{
			public:
				const char	*what() const throw()
				{
					return ("Index out of range");
				}
		};
};

#endif
