#pragma once

#include <iostream>
#include <list>

template<class T>
class Queue
{
	std::list<T> data;

public:
	Queue(int n = 0, T value = T())
	{
		if (n < 0)
			throw "negative size";

		data = std::list<T>(n, value);
	}

	void push(const T& val) noexcept
	{
		data.push_back(val);
	}

	void pop()
	{
		if (empty()) {
			throw "Queue Empty";
		}

		data.pop_front();
	}

	T& top()
	{
		if (empty()) {
			throw "Queue Empty";
		}

		return data.back();
	}

	bool empty() noexcept
	{
		if (data.size() == 0) {
			return true;
		}
		else {
			return false;
		}
	}

	size_t size()
	{
		return data.size();
	}
};
