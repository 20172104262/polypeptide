// test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;

class Cfeet
{
private:
	int feet;
	int inch;
public:
	int getfeet();
	int getinch();
	void display();
	int arithmetic(int a,int b);
};
int Cfeet::arithmetic(int a,int b)
{
	feet = a;
	inch = b;
	inch = inch % 12;
	feet = feet + inch % 12;
}
void Cfeet::display()
{
	cout << "基类  " << feet << "英尺" << inch << "英寸" << endl;
}
int Cfeet::getfeet()
{
	return feet;
}
int Cfeet::getinch()
{
	return inch;
}
class Cmyfeet :public Cfeet
{
public:
	void display();
};
void Cmyfeet::display()
{
	cout << "派生类 " << feet << "英尺" << inch << "英寸" << endl;
}
int main()
{
    return 0;
}

