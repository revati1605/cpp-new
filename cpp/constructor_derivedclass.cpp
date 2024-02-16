#include<iostream>
using namespace std;

class Base1
{
	int base1;
	public:
	Base1(int a)
	{
		base1 = a;
	}
	void printBase1()
	{
		cout<<"The value of Base1 is :"<<base1<<endl;
	}
};

class Base2
{
        int base2;
        public:
        Base2(int a)
        {
                base2 = a;
        }
        void printBase2()
        {
                cout<<"The value of Base2 is :"<<base2<<endl;
        }
};

class Derived :public Base1,public Base2
{
	int derived1,derived2;
	public:
	Derived(int a,int b,int c,int d):Base1(a),Base2(b)
	{
		derived1=c;
		derived2=d;
	}
	void printDerived()
	{
		cout<<"The value of derived1 is:"<<derived1<<endl;
		cout<<"The value of derived2 is:"<<derived2<<endl;
	}
};

int main()
{
	Derived d1(10,20,30,40);
	d1.printBase1();
	d1.printBase2();
	d1.printDerived();
}

