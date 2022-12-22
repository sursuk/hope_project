
/*
- допустимые операции для очереди:
=инициализация,
=проверка на пустоту,
=добавление нового элемента в конец,
=извлечение элемента из начала;
*/

#include"queue.h"


Queue::Queue()
{
	for (char counter = 'a'; counter < 'z'; counter++) {
		list.push_back(counter);
	}
}

Queue::Queue(std::string path)
{
	std::ifstream input_file;
	input_file.open(path);

	if (!input_file.is_open()) {
		throw "Exception: file don't open";
	}

	while (!input_file.eof()) {
		char temp;
		input_file >> temp;
		push(temp);
	}
	input_file.close();
}

Queue::~Queue()
{
}

void Queue::push(char symbol)
{
	list.push_back(symbol);
}

char Queue::get_element()
{
	char returnSym = list.front();
	list.pop_front();
	return returnSym;
}

bool Queue::empty()
{
	return list.empty();
}


