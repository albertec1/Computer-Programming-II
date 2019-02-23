#include <stdlib.h>
#include <iostream>

void ex1() {
	int arr[10];
	int* p = arr;
	for (int i = 0; i < 10; i++)
	{
		*(p + i) = (int)p + i;

		std::cout << arr[i] << std::endl;

	}
}

void reverse(int *arr, int sizeOfArr) {
	for (int i = 9; i >= 0; i--) {
		std::cout << *(arr + i) << std::endl;
	}
}
void ex3()
{
	int arr[10];

	for (int i = 0; i < 10; i++)
	{
		int j = 0;
		std::cout << "type an integer:" << std::endl;
		std::cin >> j;
		std::cout << "\n" << std::endl;
		*(arr + i) = j;
	}
	reverse(arr, 10);
}

void absSwap(int* array1, int sizeOfArray1, int* array2, int sizeOfArray2) {

	for (int i = 0; i < sizeOfArray1; i++) {
		if (*(array2 + i) >= 0) {
			*(array1 + i) = *(array2 + i);
		}
		if (*(array2 + i) < 0) {
			*(array1 + i) = (*(array2 + i) * (-1));
		}
	}

	std::cout << "array 1" << "        " << "array2" << std::endl;
	std::cout << "-------" << "        " << "------" << std::endl;

	for (int i = 0; i < sizeOfArray1; i++) {
		std::cout << *(array1 + i) << "              " << *(array2 + i) << std::endl;
	}
}

void ex4()
{
	//int* nums = (int*)malloc(4 * sizeof(int)); Allocates a block of memory of a given size with no initialization.
	//int* more_nums = (int*)calloc(4, sizeof(int)); Allocates a block of memory of a given size initialized to zero.

	int* arr1 = (int*)calloc(20, sizeof(int));
	int* arr2 = (int*)malloc(20 * sizeof(int));

	for (int i = 0; i < 20; i++) {
		std::cout << "type a signed or an unsigned integer \n" << std::endl;
		std::cin >> *(arr2 + i);
	}

	absSwap(arr1, 20, arr2, 20);
	free(arr1);
	free(arr2);
	arr1 = arr2 = nullptr;
}



int main()
{
	//ex1();
	//ex3();
	//ex4();

	system("pause");
	return 0;
}

