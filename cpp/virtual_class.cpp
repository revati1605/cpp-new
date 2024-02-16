#include<iostream>
using namespace std;

class Student
{
	protected :
		int roll_num;
	public:
		void set_num(int rn)
		{
			roll_num = rn;
		}
		void print_num()
		{
			cout<<"Roll number is :"<<roll_num<<endl;
		}
};

class Test : virtual public Student
{
	protected:
		float maths,physics;
	public:
		void set_marks(float m,float p)
		{
			maths = m;
			physics = p;
		}
		void print_marks()
		{
			cout<<"Marks obtained in maths are:"<<maths<<endl;
			cout<<"Marks obtained in physics are:"<<physics<<endl;
		}
};

class Sports : virtual public Student
{
	protected:
		float score;
	public:
		void get_score(float sc)
		{
			score = sc;
		}
		void print_score()
		{
			cout<<"Your PT score is :"<<score<<endl;
		}
};

class Result: public Test,public Sports
{
	private:
		float total;
	public:
		void display()
		{
			total = maths+physics+score;
			print_num();
			print_marks();
			print_score();
			cout<<"Total is:"<<total<<endl;

		}
};

int main()
{
	Result revati;
	revati.set_num(6);
	revati.set_marks(78.9,56.9);
	revati.get_score(89.9);
	revati.display();
}
