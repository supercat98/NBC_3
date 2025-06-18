#ifndef SimpleVector_h_
#define SimpleVector_h_
#include <iostream>
using namespace std;
template <typename T>

class SimpleVector
{
public:
	T* num;
	int currentSize;
	int currentCapacity;

	SimpleVector() : currentSize(0), currentCapacity(10)
	{
		num = new T[currentCapacity];
	}

	SimpleVector(int x) : currentSize(0), currentCapacity(x)
	{
		num = new T[currentCapacity];
	}

	void push_back(const T a)
	{
		if (currentSize < currentCapacity)
		{
			num[currentSize++] = a;
		}
	}

	void pop_back()
	{
		if (currentSize > 0)
		{
			currentSize--;
		}
	}

	int size() 
	{
		return currentSize;
	}

	int capacity()
	{
		return currentCapacity;
	}

	void cleanAll()
	{
		delete[] num;
		num = nullptr;
	}


};

#endif
