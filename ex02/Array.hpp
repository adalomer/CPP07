#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <stdexcept>

template <typename T>

class Array
{
private:
    T* _data;
    unsigned int _size;

public:
    Array() : _data(NULL), _size(0) {}
    Array(unsigned int n) : _data(new T[n]()), _size(n) {}
    Array(const Array& other) : _data(NULL), _size(0)
    {
        *this = other;
    }
    Array& operator=(const Array& other)
    {
        if(this != &other)
        {
            T* tmp = (other._size > 0) ? new T[other._size] : NULL;
            for(unsigned int i = 0; i < other._size; ++i)
                tmp[i] = other._data[i];
            delete[] _data;
            _data = tmp;
            _size = other._size;
        }
        return *this;
    }
    ~Array()
    {
        delete[] _data;
    }
    T& operator[](unsigned int index)
    {
        if(index >= _size)
            throw std::out_of_range("Array index no in range");
        return _data[index];
    }
    const T& operator[](unsigned int index) const
    {
        if(index >= _size)
            throw std::out_of_range("Array index no in range");
        return _data[index];
    }
    unsigned int size() const
    {
        return _size;
    }
};

#endif
