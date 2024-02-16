#include<iostream>
using namespace std;
class Complex
{
	int a,b;
	public:
	Complex(int x,int y)
	{
		a=x;
		b=y;
	}
	Complex()
	{
		a=0;b=0;
	}
	Complex(int x)
	{
		a=x;
		b=0;
	}
	void printnum()
	{
		cout<<"the number is :"<<a<<"+"<<b<<"i"<<endl;
	}
};
int main()
{
	Complex a(3,4);
	Complex b = Complex (5,6);
	Complex c;
	c.printnum();
	Complex d(23);
	d.printnum();
	a.printnum();
	b.printnum();
}
