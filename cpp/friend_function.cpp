#include <iostream>
using namespace std;
class Complex
{
	int a,b;
	public:
	void setnum(int v1,int v2)
	{
		a=v1;
		b=v2;
	}
	friend Complex sumcomplex(Complex a1, Complex a2);
	void printnum()
	{
		cout<<"your number is :"<<a<<"+"<<b<<"i"<<endl;
	}
};

Complex sumcomplex(Complex a1, Complex a2)
{
	Complex a3;
	a3.setnum((a1.a+a2.a),(a1.b+a2.b));
	return a3;
}
int main()
{
	Complex c1,c2,sum;
	c1.setnum(2,3);
	c1.printnum();
	c2.setnum(4,5);
	c2.printnum();
	sum = sumcomplex(c1,c2);
	sum.printnum();

}

