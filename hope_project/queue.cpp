
/*
- допустимые операции для очереди:
=инициализация,
=проверка на пустоту,
=добавление нового элемента в конец,
=извлечение элемента из начала;
*/

#include"queue.h";


Queue::Queue()
{
	for (float counter = -10.0; counter < 10.00; counter += 0.1) {
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
		float temp;
		input_file >> temp;
		push(temp);
	}
	input_file.close();
}

Queue::~Queue()
{
}

void Queue::push(float number)
{
	list.push_back(number);
}

float Queue::get_element()
{
	float returnNum = list.front();
	list.pop_front();
	return returnNum;
}

bool Queue::empty()
{
	return list.empty();
}


