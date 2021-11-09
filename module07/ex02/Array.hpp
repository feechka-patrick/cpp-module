#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template<typename T>
class Array
{
	private:
		T *array;
		unsigned int length;
	public:
		Array()
		{
			array = new T[0];
			length = 0;
		}

		Array(unsigned int length)
		{
			array = new T[length];
			this->length = length;
		}

		unsigned int size(void) const
		{
			return (this->length);
		}

		Array(const Array &obj)
		{
			this->array = new T[obj.length];
			this->length = obj.length;
			for (size_t i = 0; i < obj.length; i++)
				this->array[i] = obj.array[i];
		}

		Array& operator= (const Array& obj)
		{
			delete[] this->array;
			this->array = new T[obj.length];
			this->length = obj.length;
			for (size_t i = 0; i < obj.length; i++)
				this->array[i] = obj.array[i];
			return (*this);
		}
		
		T& operator[](std::size_t index) const
		{
			if (index < 0 || index >= length)
				throw std::exception();
			return (this->array[index]);
		}

		~Array()
		{
			delete[] this->array;
		}

};

#endif