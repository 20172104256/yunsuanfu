// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CFeet
{
private:
	int feet;
	int inch;
public:
	void setvalue(int fe, int in);
	void display();
	CFeet add(CFeet & oc1);
	CFeet operator + (CFeet & oc1);
};
void CFeet::setvalue(int fe, int in) {
	feet = fe + in / 12;
	inch = in % 12;
}
void CFeet::display() {
	cout << feet << "Ӣ��" << inch << "Ӣ��" << endl;
}
CFeet CFeet::add(CFeet & oc1) {
	CFeet temp;
	temp.setvalue(feet + oc1.feet, inch + oc1.inch);
	return temp;
}
CFeet CFeet::operator + (CFeet & oc1) {
	CFeet temp;
	temp.setvalue(feet + oc1.feet, inch + oc1.inch);
	return temp;
}


int main()
{
	CFeet A, B, C;
	A.setvalue(10, 11);
	B.setvalue(6, 9);
	C = A + B;
	C.display();
	return 0;
}
