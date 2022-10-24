#pragma once

#include<vector>
#include<iostream>

class singly_linked_list
{
public:
	singly_linked_list(std::vector<int> init_arr);
	~singly_linked_list();

	int getValue(int index);
	void putValue(int index, int value);
	void push_back(int value);

	void print();
	bool is_empty();
	int length();

private:
	struct Node
	{
		int value;
		Node* next = nullptr; 

		Node(int _value) : value(_value), next(nullptr){}
	};

	int size = 0;
	Node* head;
	Node* last;

};


