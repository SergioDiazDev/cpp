#ifndef ARRAY_TPP
# define ARRAY_TPP

template <typename T> Array<T>::Array()
{
	_array = NULL;
	_size = 0;
}
template <typename T> Array<T>::Array(unsigned int size)
{
	_size = size;
	_array = new T[_size];
}

template <typename T> Array<T>::~Array()
{
	delete [] _array;
	_size = 0;
}

template <typename T> Array<T>::Array(Array const &copy)
{
	_size = copy._size;
	_array = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
		_array[i] = copy._array[i];
}

template <typename T> Array<T> &Array<T>::operator=(const Array &copy)
{
	if (this != &copy)
	{
		_size = copy._size;
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = copy._array[i];
	}
	return *this;
}

template <typename T> unsigned int Array<T>::size() const {return _size;}


template <typename T> T &Array<T>::operator[](unsigned int size)
{
	if (size >= _size)
		throw std::exception();
	return _array[size];
}

#endif