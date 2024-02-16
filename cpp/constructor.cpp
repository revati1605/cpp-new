#include<iostream>
using namespace std;
class Complex
{
	int a,b;
	public:
	Complex()
	{
		a=0;
		b=0;
		cout<<"constructor"<<endl;
	}
	Complex(int x)
	{
		a = x;
	}
	Complex(Complex &obj)
	{
		cout<<"copy constructor"<<endl;
		a = obj.a;
	}
	void display()
	{
		cout<<"value of a is:"<<a<<endl;
	}

};
int main()
{
	Complex a1(4),b1;
	Complex c1(a1);
	a1.display();
	b1.display();
	c1.display();

}

