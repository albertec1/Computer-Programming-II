//#include <stdlib.h>
//#include <iostream>
//
//using namespace std;
//
//void doubleNum(int& num) {
//	num = num*2;
//}
//
//void ex_1() {
//
//	cout << "type a number from 1 to 100: ";
//	int number = 0;
//	cin >> number;
//
//	doubleNum(number);
//
//	cout << number << endl;
//}
//
//struct Pirate {
//	char name[20];
//	int lifeUnits;
//};
//
//struct Weapon {
//	char name[20];
//	int damageUnits;
//};
//
//void printPirateInfo(const Pirate &p)
//{
//	cout << "pirate name: " << p.name << endl;
//	cout << "pirate lifeunits: " << p.lifeUnits << endl;
//}
//
//void Attack(Pirate* pirate, const Weapon &weapon)
//{
//	pirate->lifeUnits -= weapon.damageUnits; 
//}											 
//void ex_2() {
//	Pirate LeChuck{ "LeChuck", 100 };
//	Weapon imperialSword{ "Imperial_Sword", 10 };
//
//	printPirateInfo(LeChuck);
//
//	Attack(&LeChuck, imperialSword);
//
//	printPirateInfo(LeChuck);
//
//}
//int main()
//{
//	//ex_1
//	ex_2();
//
//
//	system("pause");
//	return 0;
//
//}