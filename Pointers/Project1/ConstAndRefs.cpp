#include <stdlib.h>
#include <iostream>

using namespace std;

void doubleNum(int& num) {
	num = num*2;
}

void ex_1() {

	cout << "type a number from 1 to 100: ";
	int number = 0;
	cin >> number;

	doubleNum(number);

	cout << number << endl;
}

struct Pirate {
	char name[20];
	int lifeUnits;
};

struct Weapon {
	char name[20];
	int damageUnits;
};

void printPirateInfo(const Pirate &p)
{
	cout << "pirate name" << p.name << endl;
	cout << "pirate lifeunits" << p.lifeUnits << endl;
}

void attack(const Pirate* pirate, const Weapon weapon)
{
	pirate->lifeUnits -= weapon.damageUnits; //how can I change the pirate's lifeUnits 
											 //if the type is const?
void ex_2() {
	const Pirate LeChuck{ "LeChuck", 100 };
	const Weapon imperialSword{ "Imperial_Sword", 10 };

	printPirateInfo(LeChuck);

	attack(&LeChuck, imperialSword);
}
int main()
{
	//ex_1
	ex_2


	system("pause");
	return 0;

}