#ifndef ARRAY_HPP
#define ARRAY_HPP
template <typename T>
class Array
{
private:
	T *aray;
	unsigned int _size;
public:
	Array()
	{
		aray = new T[0];
		_size = 0;
	}
	~Array()
	{
		delete aray[];
	}
	Array(unsigned int n)
	{
		Aray = new[n];
		_size = n;
	}
	unsigned int get_size()
	{
		return (this->_size);
	}
	Array(const Array &copy)
	{
		unsigned int i;
		unsigned int size;

		i = 0;
		size = copy.get_size();
		aray = new T[size];
		while (i < size)
		{
			this->aray[i] = copy[i]
			++i;
		}
	}
	Array &operator=(const Array& op)
	{
		unsigned int i;
		unsigned int size;

		i = 0;
		size = copy.get_size();
		aray = new T[size];
		while (i < size)
		{
			this->aray[i] = copy.get_element(i)
			++i;
		}
		return (this);
	}
	T& Array::operator[] (const unsigned int index)
	{
		if (index + 1 >= _size)
			throw ArrayAccess();
		return (aray[index]);
	}
};

#endif