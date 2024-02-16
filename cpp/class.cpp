#include <iostream>
using namespace std;
 
class Emp
{
	private:
		int a,b,c;
	public:
		int d,e;
		void setdata(int a1,int b1,int c1);
		void getdata()
		{
			cout<<"The value of a is:"<<a<<endl;
			cout<<"The value of b is:"<<b<<endl;
			cout<<"The value of c is:"<<c<<endl;
			cout<<"The value of d is:"<<d<<endl;
			cout<<"The value of e is:"<<e<<endl;
		}
};

void Emp :: setdata(int a1, int b1, int c1)
{
	a = a1;
	b=b1;
	c=c1;

}

int main()
{
	Emp e1;
	e1.setdata(12,34,56);
	e1.d = 78;
	e1.e = 90;
	e1.getdata();
}
