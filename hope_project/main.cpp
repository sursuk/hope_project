
/*
��� ���� �� ������������ �����. ��������� ���� �������,
�� ���� �������� ����� ���������� ������� ��� �����, ������� a,
����� ��� ����� �� ��������� [a,b], �, �������,
��� ��������� �����, �������� �������� ������� � ������ ������.
*/



#include"queue.h";

#include<iostream>
#include<vector>
#include<algorithm>

int main() {
	//Queue queue("file.txt");
	Queue queue;
	std::vector <float> vectorA;
	std::vector <float> vectorInterval;
	std::vector <float> trashVector;

	auto print = [](const float& num) { std::cout << " " << num; };

	int n;
	int a, b;
	/*
	std::cout << "n"; std::cin >> n;
	std::cout << "a,b"; std::cin >> a >> b;
	*/

	n = 5;
	a = -2;
	b = 5;

	if (!queue.empty()) {
		float temp = queue.get_element();
		if (temp < n) {
			vectorA.push_back(temp);
		}
		else if ((a <= temp) && (temp <= b)) {
			vectorInterval.push_back(temp);
		}
		else {
			trashVector.push_back(temp);
		}
	}

	std::cout << std::endl;
	std::for_each(vectorA.cbegin(), vectorA.cend(), print);
	std::cout << std::endl;
	std::for_each(vectorInterval.cbegin(), vectorInterval.cend(), print);
	std::cout << std::endl;
	std::for_each(trashVector.cbegin(), trashVector.cend(), print);
	
	return 0;
}