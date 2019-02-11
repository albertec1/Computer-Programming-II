#include <iostream>


void ex_1()
{
	std::cout << "exercise 1" << std::endl;
	int energy = 100;
	int	*/*this star means that we take the memory adress of an object and store it into a pointer*/ptr = &energy;
	*/*this star means that we take the value poited by the pointer*/ptr = 50;
	std::cout << energy << std::endl;

	//cout --> console output.
	//std --> namespace that contains many things, such as the 'cout'.
	std::cout << "\n" << std::endl;
}

void ex_2(int *x)
{
	std::cout << "exercise 2" << std::endl;

	*x = 0;

}

void ex_3()
{
	std::cout << "exercise 3" << std::endl;

	int num = 3;
	int *ptr = &num;
	std::cout << ptr << std::endl;
	int *copy = ptr;
	std::cout << copy << std::endl;
	std::cout << *copy << std::endl;
	*copy = 0;
	std::cout << *copy << std::endl;

	std::cout << "\n" << std::endl;
}

void ex_4()
{
	std::cout << "exercise 4" << std::endl;

	int vec[3] = { 1, 2, 3 };	int *ptr1 = &vec[0];
	std::cout << ptr1 << std::endl;
	std::cout << *ptr1 << std::endl;

	std::cout << "\n" << std::endl;
}

void ex_5()
{
	std::cout << "exercise 5" << std::endl;

	int vec[3] = { 1, 2, 3 };
	int *p = vec;
	for (int i = 0; i < 3; ++i) {
		std::cout << p[i] << std::endl;
	}
}



int main()
{
	ex_1();

	int val = 100;
	ex_2(&val);
	std::cout << val << std::endl;

	ex_3();
	ex_4();
	ex_5();

	system("pause");
		return 0;
}