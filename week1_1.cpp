#include <iostream>
using namespace std;

class Rectangle
{
	public:
		Rectangle(int h, int w);
		bool operator <(const Rectangle &s);
	private:
		int i32height, i32width;
};
Rectangle::Rectangle(int h, int w) 
{
	i32height = h;
	i32width = w;
}

bool Rectangle::operator <(const Rectangle &s) 
{

	if ((i32width*i32height) < (s.i32width * s.i32height))
		return true;
	else
		return false;
};

int main()
{
	Rectangle rect1(2, 4);
	Rectangle rect2(3, 5);
	if (rect1 < rect2)
		cout<< "rect1 is smaller than rect2"<< endl;

}