#include<iostream>
using namespace std;

class Student
{
	protected:
		int roll_num;
	public:
		void set_rollnum(int rn);
		void get_rollnum();
};

void Student :: set_rollnum(int rn)
{
	roll_num = rn;
}
void Student :: get_rollnum()
{
	cout<<"The roll num is :"<<roll_num<<endl;
}

class exam : public Student
{
	protected:
		float maths,physics;
	public:
		void set_marks(float m,float p);
		void get_marks();
};

void exam :: set_marks(float m , float p)
{
	maths = m;
	physics = p;
}

void exam :: get_marks()
{
	cout<<"marks obtained in maths are:"<<maths<<endl;
	cout<<"marks obtained in physics are:"<<physics<<endl;
}

class res : public exam
{	
	protected:
	float percentage;
	public:
	void calc_result()
	{
		get_rollnum();
		get_marks();
		cout<<"Result is :"<<(physics+maths)/2<<"%"<<endl;
	}
};

int main()
{
	res revati;
	revati.set_rollnum(4);
	revati.set_marks(95.0,99.0);
	revati.calc_result();
}
