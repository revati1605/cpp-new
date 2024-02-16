#include<iostream>
 using namespace std;

 int sum(int a,int b)
{
	cout<<"function using 2 parameters"<<endl;
	return a+b;
}

int sum(int a,int b, int c )
{
	cout<<"funcion with 3 paramters"<<endl;
	return a+b+c;
}

int main()
{
	cout<<"sum is"<<sum(2,3)<<endl;
	cout<<"sum is"<<sum(3,4,3)<<endl;
}
