#include<iostream>
#include<cstring>
using namespace std;

class CWH
{	
	protected:
	string title;
	float rating;
	public:
		CWH(string s,float r)
		{
			title = s;
			rating = r;
		}
		virtual void display(){}
};

class CWHvideo : public CWH
{
	float videolength;
	public:
       	CWHvideo(string s, float r,float vl): CWH( s, r)
	{
		videolength = vl;
	}
	void display()
	{
		cout<<"The title of video is"<<title<<endl;
		cout<<"Rating given to video "<<rating<<"out of 5"<<endl;
		cout<<"Video lenth is"<<videolength<<"minutes"<<endl;
	}
};

class CWHtext : public CWH
{
        int words;
	public :
	CWHtext(string s, float r,int wc): CWH(s,r)
        {
                words = wc;
        }
        void display()
        {
                cout<<"The title of text is"<<title<<endl;
                cout<<"Rating given to text "<<rating<<"out of 5"<<endl;
                cout<<"Word count is"<<words<<"words"<<endl;
        }
};

int main()
{
	string title;
	float ratings,videolength;
	int words;
	ratings = 4.68;
	videolength = 5;
	title = "DJango tutorial";
	CWHvideo DJT(title,ratings,videolength);
//	DJT.display();
	title = "DJango text tutorial";
	ratings = 4;
	words = 500;
	CWHtext DJ(title,ratings,words);
//	DJ.display();
	CWH *tut[3];
	tut[0]=&DJT;
	tut[1]=&DJ;
	tut[0]->display();
	tut[1]->display();


}
