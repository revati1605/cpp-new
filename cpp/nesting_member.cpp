#include<iostream>
#include <string>
using namespace std;
class binary
{
	string s;
public:
	void read_binary();
	void check_bin();
	void ones_complement();
	void display();
};
void binary :: read_binary()
{
	cout<<"enter binary number:"<<endl;
	cin>>s;
}

void binary :: check_bin()
{
	for(int i=0;i<s.length();i++)
	{
		if(s.at(i)!='0' &&  s.at(i) != '1')
		{
			cout<<"Incorrect format"<<endl;
		exit(0);
		}
	}
}
void binary :: ones_complement()
{
	for(int i=0;i < s.length();i++)
	{
		if(s.at(i) == '0')
			s.at(i) = '1';
		else
			s.at(i) = '0';
	}
}

void binary :: display()
{
	cout<<"displaying the number :"<<endl;
	for(int i=0;i < s.length();i++)
        {

	cout<<s.at(i);
	}
	cout <<endl;
}
int main()
{
	binary b;
	b.read_binary();
	b.check_bin();
	b.display();
	b.ones_complement();
	b.display();
}

