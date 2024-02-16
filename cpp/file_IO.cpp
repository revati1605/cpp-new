#include<iostream>
#include<fstream>
using namespace std;
int main()
{	
	string st2,st1 = "This is my sample.txt";
	ofstream out("sample.txt");
	out<<st1;
	out.close();
	ifstream in("sample.txt");
	getline(in,st2);
	cout<<st2;
	in.close();

}
