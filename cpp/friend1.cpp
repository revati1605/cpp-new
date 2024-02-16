#include<iostream>
using namespace std;
class Complex;

class calculator
{
	public:
		int sumRealComplex(Complex , Complex);
};
class Complex
{
	int a,b;
	public:
	//friend int calculator :: sumRealComplex(Complex o1,Complex o2);
	//declaring entire class as friend
	friend class calculator;
	void setnum(int n1,int n2)
	{
		a=n1;
		b=n2;
	}
};

int calculator :: sumRealComplex(Complex o1 ,Complex o2)
{
	return (o1.a+o2.a);
}
int main()
{
	Complex o1,o2;
	o1.setnum(1,2);
	o2.setnum(3,4);
	calculator calc;
	int res = calc.sumRealComplex(o1,o2);
	cout<<"res is:"<<res<<endl;
}
