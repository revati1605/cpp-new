#include<iostream>
using namespace std;

template <class T>

class vector
{
	public:
		T *arr;
		int size;
	vector(int m)
	{
		size = m;
		arr = new T[size];
	}
	T dotproduct(vector &v)
	{
		T d = 0;
		for(int i=0;i<size;i++)
			d += this->arr[i] * v.arr[i];
		return d;
	}
};

int main()
{
	vector<float>v1(3);
	v1.arr[0]=3.45;
	v1.arr[1]=5.9;
	v1.arr[2]=4.32;
	vector<float>v2(3);
        v2.arr[0]=3.56;
        v2.arr[1]=0.9;
        v2.arr[2]=4.2;
	float f = v1.dotproduct(v2);
	cout<<f<<endl;


}
