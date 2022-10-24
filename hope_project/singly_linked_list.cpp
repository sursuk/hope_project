

#include"singly_linked_list.h";

#include<vector>





singly_linked_list::singly_linked_list(std::vector<int> init_arr)
{
	for (auto element : init_arr) {
		push_back(element);
	}
}

singly_linked_list::~singly_linked_list()
{
}

int singly_linked_list::getValue(int index)
{
	if (is_empty()) {
		throw "list is empty";
	}
	if (index > length()) {
		throw "index > size of list";
	}
	Node* node = head;
	for (int i = 0; i < length(); i++) {
		node = node->next;
	}
	return node->value;
}


void singly_linked_list::putValue(int index, int value)
{
	if (index > length()) {
		throw "index > length of list";
	}


	//put to begin list
	if (is_empty()) {
		Node* node = new Node(value);
		head = node;
		last = node;
		size++;
		return;
	}
	if (index == 0) {
		Node* node = new Node(value);
		if (head->next == nullptr) {
			delete head;
			head = node;
			return;
		}
		else {
			node->next = head->next;
			delete head;
			head = node;
			return;
		}
	}
	//put to end list
	if (index == length()) {
		push_back(value);
		return;
	}
	//put to middle list
	Node* node = new Node(value);//new element

	auto iterator = head;
	for (int i = 0; i < index - 1; i++) {
		iterator = head->next;
	}
	node->next = iterator->next->next;
	delete iterator->next;
	iterator->next = node;
}

void singly_linked_list::push_back(int value)
{
	Node* node = new Node(value);
	size++;
	if (is_empty()) {
		head = node;
		return;
	}
	last->next = node;
	last = node;
}

void singly_linked_list::print()
{
	if (is_empty()) {
		return;
	}
	Node* node = head;
	while (node) {
		std::cout << node->value << " ";
		node = node->next;
	}
	std::cout << std::endl;
}

bool singly_linked_list::is_empty()
{
	return head == nullptr;
}

int singly_linked_list::length()
{
	return size;
}
