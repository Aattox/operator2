// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
using namespace std;
class CFeet
{
	int feet;
	int inches;
	int check();
public:
	CFeet();
	CFeet(int x, int y);
	int setFeet(int x,int y);
	void disPlay();
	int addFeet(int a,int b);
	CFeet CFeet::operator+(CFeet&oa);
	CFeet CFeet::operator+(const int&ob);
};
CFeet::CFeet()
{
	feet = 1;
	inches = 1;
}
CFeet::CFeet(int x,int y)
{
	feet = x;
	inches = y;
	check();
}
int CFeet::setFeet(int x,int y)
{
	feet = x;
	inches = y;
	check();
	return 0;
}
void CFeet::disPlay()
{
	cout << feet << "英尺" << inches << "英寸" << endl;
}
int CFeet::addFeet(int a,int b)
{
	feet = feet + a;
	inches = inches + b;
	check();
	return 0;
}
int CFeet::check()
{
	if(inches>12)
	{
		feet = feet + inches / 12;
		inches = inches % 12;
	}
	return 0;
}
CFeet CFeet::operator+(CFeet&oa)
{
	CFeet FEET;
	FEET.setFeet(feet + oa.feet, inches + oa.inches);
	return FEET;
}
CFeet CFeet::operator+(const int&ob)
{
	CFeet FEET;
	FEET.setFeet(feet, inches + ob);
	return FEET;
}
int main()
{
	CFeet a(3, 10), b(1, 6), c(4, 8), d, e, f, g, h;
	e = a + b;
	f = a + 20;
	e.disPlay();
	f.disPlay();
	a.addFeet(3, 3);
	a.disPlay();
	g = e + f;
	g.disPlay();
	h = a + g;
	h.disPlay();
    return 0;
}

