// test.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include"iostream"
using namespace std;

class Cfeet
{
protected:
	int feet;
	int inch;
public:
	int getfeet();
	int getinch();
	virtual void display();
	int arithmetic(int a,int b);
};
int Cfeet::arithmetic(int a,int b)
{
	feet = a;
	inch = b;
	inch = inch % 12;
	feet = feet + inch / 12;
	return feet;
	return inch;
}
void Cfeet::display()
{
	cout << "����  " << feet << "Ӣ��" << inch << "Ӣ��" << endl;
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
	cout << "������ " << feet << "Ӣ��" << inch << "Ӣ��" << endl;
}
int main()
{
	Cfeet *p;        //Cmyfeet *p;
	p = new Cmyfeet; //p = new Cmyfeet; 
	p->arithmetic(3, 8);
	p->display();
	p->Cfeet::display();
	return 0;
}

