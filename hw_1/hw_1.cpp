#include <iostream>
#include <vector>
#include <algorithm>

void print(std::vector<int> vec) {
	for (auto num : vec) {
		std::cout << num << " ";
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	std::vector<int> vec{ 4, 7, 9, 14, 12 };
	std::cout << "Входные данные: ";
	print(vec);
	std::for_each(vec.begin(), vec.end(),
		[&](int& num)
		{
			if ((num % 2) != 0) {
				num *= 3;
			}
		});
	std::cout << std::endl << "Выходные данные: ";
	print(vec);
}
