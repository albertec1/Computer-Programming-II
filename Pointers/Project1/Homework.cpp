//#include <stdlib.h>
//#include <iostream>
//
//void ex1() {
//	int arr[10];
//	int* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = (int)p + i;
//
//		std::cout << arr[i] << std::endl;
//
//	}
//}
//
//void reverse(int *arr, int sizeOfArr) {
//	for (int i = 9; i >= 0; i--) {
//		std::cout << *(arr + i) << std::endl;
//	}
//}
//void ex3()
//{
//	int arr[10];
//
//	for (int i = 0; i < 10; i++)
//	{
//		int j = 0;
//		std::cout << "type an integer:" << std::endl;
//		std::cin >> j;
//		std::cout << "\n" << std::endl;
//		*(arr + i) = j;
//	}
//	reverse(arr, 10);
//}
//
//void absSwap(int* array1, int sizeOfArray1, int* array2, int sizeOfArray2) {
//
//	for (int i = 0; i < sizeOfArray1; i++) {
//		if (*(array2 + i) >= 0) {
//			*(array1 + i) = *(array2 + i);
//		}
//		if (*(array2 + i) < 0) {
//			*(array1 + i) = (*(array2 + i) * (-1));
//		}
//	}
//
//	std::cout << "array 1" << "        " << "array2" << std::endl;
//	std::cout << "-------" << "        " << "------" << std::endl;
//
//	for (int i = 0; i < sizeOfArray1; i++) {
//		std::cout << *(array1 + i) << "              " << *(array2 + i) << std::endl;
//	}
//}
//
//void ex4()
//{
//	//int* nums = (int*)malloc(4 * sizeof(int)); Allocates a block of memory of a given size with no initialization.
//	//int* more_nums = (int*)calloc(4, sizeof(int)); Allocates a block of memory of a given size initialized to zero.
//
//	int* arr1 = (int*)calloc(20, sizeof(int));
//	int* arr2 = (int*)malloc(20 * sizeof(int));
//
//	for (int i = 0; i < 20; i++) {
//		std::cout << "type a signed or an unsigned integer \n" << std::endl;
//		std::cin >> *(arr2 + i);
//	}
//
//	absSwap(arr1, 20, arr2, 20);
//	free(arr1);
//	free(arr2);
//	arr1 = arr2 = nullptr;
//}
//
////function to create the cncatenation of two words
//void concat(char* word1, char* word2, char* resultWord) {
//	for (int i = 0; *(word2 + i) != '\0'; i++)
//	{
//		if 
//	}
//}
//
////function to measure the size of a word;
//int sizeword(char* word) {
//		int size = 0;
//		while (1)
//		{
//			size++;
//			if (*(word + size) == '\0') {
//				return size;
//			}
//		}
//}
//
////Function to print a string on the screen.
//void printString(char* myString) {
//	for (int i = 0; *(myString + i) != '\0'; i++)
//	{
//		std::cout << *(myString + i);
//	}
//	std::cout << std::endl;
//}
//void ex5()
//{
//	//take the first word and store it.
//	int word1[20] = {};
//	std::cout << "Type a word: ";
//	for (int i = 0; *(word1 + i) != 0; i++) {
//		std::cin >> *(word1 + i);
//	}
//	
//	//take the second word and store it
//	int word2[20] = {};
//	std::cout << "type a second word: ";
//	for (int j = 0; *(word2 + j) != '\0'; j++)
//	{
//		std::cin >> *(word2 + j);
//	}
//}
//
//
//int main()
//{
//	//ex1();
//	//ex3();
//	//ex4();
//	ex5();
//
//
//	system("pause");
//	return 0;
//}

