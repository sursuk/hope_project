

/*
В непустом списке обнулить
все отрицательные значения элементов, 
лежащих после первого элемента с максимальным значением.

*/



#include"singly_linked_list.h";

#include<vector>
#include<climits>
#include<iostream>


int main() {

	std::vector<int> test_vector = { 4, 3, 5, -4, 5, -3, 7, 3 };
	singly_linked_list list(test_vector);

	std::cout << "before";
	list.print();
	//find max value and index max value
	int max = INT_MIN;
	int index_max_value = 0;
	for (int i = 0; i < list.length(); i++) {
		if (list.getValue(i) > max) {
			max = list.getValue(i);
			index_max_value = i;
		}
	}
	// обнуляем значения
	for (int i = index_max_value + 1; i < list.length(); i++) {
		if (list.getValue(i) < 0) {
			list.putValue(i, 0);
		}
	}
	std::cout << "after"; 
	list.print();
	return 0;
}