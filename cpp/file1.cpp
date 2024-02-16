#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	ofstream hout;
	hout.open("sample.txt");
	hout<<"This is me\n";
	hout<<"This is also me";
	hout.close();
	ifstream hin;
	string st;
	hin.open("sample.txt");
	while(hin.eof() == 0)
	{
		getline(hin,st);
		cout<<st<<endl;
	}
	hin.close();
}

