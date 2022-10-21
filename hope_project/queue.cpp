
/*
- допустимые операции для очереди:
=инициализация,
=проверка на пустоту,
=добавление нового элемента в конец,
=извлечение элемента из начала;
*/



class Queue
{
public:
	Queue();
	Queue(File file);
	~Queue();

	void push(float number);
	void pop();

	bool empty();

private:
	int size = 10;
	float* last;
	float* first;
};


Queue::Queue()
{
}

Queue::~Queue()
{
}

void Queue::add(float number)
{
}

void Queue::remove()
{
}

