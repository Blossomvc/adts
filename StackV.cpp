#include "StackV.h"


int Stack::size()
{
	return data.size();
}

void Stack::push(int x)
{
	data.push_back(x);
}

void Stack::pop()
{
		data.pop_back();
}

int Stack::top()
{
	int top=data.size() -1;
	
	return data[top];
}

void Stack::clear()
{
	for(int i=data.size()-1; i>0;i--)
	{
		data.pop_back();
	}
}

