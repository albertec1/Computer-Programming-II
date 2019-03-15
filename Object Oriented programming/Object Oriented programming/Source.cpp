#include <iostream>

using namespace std;


class Point1D {
public:
	int x;
	Point1D() : x(0) {
		cout << "Ctor Point1D" << endl;
	}
};
class Point2D : public Point1D {
public:
	int y;
	Point2D() : y(0) {
		cout <<	"Ctor Point2D" << endl;
	}
};

int main()
{
	Point2D p;
	system("pause");
	return 0;
} 