#include <stdlib.h>
#include <stdio.h>
#include <iostream>

void ex1() {
	int arr[10];
	int* p = arr;
	for (int i = 0; i < 10; i++)
	{
		*(p + i) = (int)p+i;

		std::cout << arr[i] << std::endl;

	}
}

void ex3()
{
	for (int i = 0; i <= 10; i++)
	{
		int j;
		std::cout << "type an integer:" << std::endl;
		std::cin >> j;

	}
}

int main() 
{
	ex1();
	ex3();

	system("pause");
	return 0;
}

