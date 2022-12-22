#pragma once


#include<list>
#include<fstream>
#include<string>

class Queue
{
public:
	Queue();
	Queue(std::string path);
	~Queue();

	void push(char symbol);

	char get_element();

	bool empty();

private:
	std::list<char> list;
};