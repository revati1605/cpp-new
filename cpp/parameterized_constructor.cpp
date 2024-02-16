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
	void printnum()
	{
		cout<<"the number is :"<<a<<"+"<<b<<"i"<<endl;
	}
};
int main()
{
	Complex a(3,4);
	Complex b = Complex (5,6);
	a.printnum();
	b.printnum();
}
