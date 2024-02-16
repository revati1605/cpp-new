#include <iostream>
using namespace std;

class Emp
{
	int id;
	static int count;
	public:
	void setdata()
	{
		cout<<"enter employee id:"<<endl;
		cin>>id;
		count++;
	}
	void getdata()
{
		cout<<"this is employee id"<<id<<"and count of employee:"<<count<<endl;
	}
static void getcount()
{
	cout<<"the count is:"<<count<<endl;

}
};
int  Emp::count = 0;

int main()
{
	Emp e1,e2,e3,e4;
	e1.setdata();
	e1.getdata();
	Emp :: getcount();
	e2.setdata();
	e2.getdata();
	Emp :: getcount();
	e3.setdata();
	e3.getdata();
	Emp :: getcount();
	e4.setdata();
	e4.getdata();
	Emp :: getcount();
}
