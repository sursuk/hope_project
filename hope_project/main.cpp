
/*
ƒан файл из вещественных чисел. »спользу€ одну очередь,
за один просмотр файла напечатать сначала все числа, меньшие a,
затем все числа из интервала [a,b], и, наконец,
все остальные числа, сохран€€ исходный пор€док в каждой группе.
*/



#include"queue.h"

#include<iostream>
#include<vector>
#include<algorithm>
#include<cctype>


int main() {
	//Queue queue("file.txt");
	Queue queue;
	std::vector <char> vectorNum;
	std::vector <char> vectorChar;
	std::vector <char> trashVector;

    //обь€вление л€мбы, чтобы вывести текст
	auto print = [](const char& num) { std::cout << " " << num; };

//for
	while (!queue.empty()) {
		char temp = queue.get_element();
        //if number
		if (isalnum(temp)) {
            vectorNum.push_back(temp);
            //if letter
        } else if(isalpha(temp)) {
            vectorChar.push_back(temp);
            //if else
        } else {
            trashVector.push_back(temp);
        }
	}

	std::cout << std::endl;
	std::for_each(vectorNum.cbegin(), vectorNum.cend(), print);
	std::cout << std::endl << "---------------------------" << std::endl;
	std::for_each(vectorChar.cbegin(), vectorChar.cend(), print);
	std::cout << std::endl << "---------------------------" << std::endl;
	std::for_each(trashVector.cbegin(), trashVector.cend(), print);
	
	return 0;
}