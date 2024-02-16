#include<iostream>
using namespace std;

class Shop
{
	int id;
	float price;
	public:
	void setdata()
	{
		cout<<"enter id and price for item:"<<endl;
		cin>>id;
		cin>>price;
	}
	void getdata()
	{
		cout<<"The id is:"<<id<<endl;
		cout<<"The price is:"<<price<<endl;
	}
};

int main()
{
	Shop *ptr = new Shop[3];
	Shop *ptr1 = ptr;

	for(int i=0;i<3;i++)
	{
		cout<<"Item number:"<<i+1<<endl;
		ptr->setdata();
		ptr++;
	}
	for(int i=0;i<3;i++)
	{	
		cout<<"Item number:"<<i+1<<endl;
		ptr1->getdata();
		ptr1++;
	}
}
