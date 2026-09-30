#include<iostream>
#include<conio.h>
using namespace std;
class rectangle
{  public:
	int l;
	int b;
	int area;
		rectangle(int len,int bre)
		{   l = len;
		    b = bre;
			area = l*b;
			cout<<"calculated area"<<endl;
			
		}
		rect(const rectangle&existingrectangle){
			l = existingrectangle.l;
			b= existingrectangle.b;
			cout<<"cloned is created"<<endl;
			
		}
		void display()
		{
			cout<<"the rectangle area is "<< area <<endl;
		}
};
int main()
{
	//rectangle(2,3).display();
	
	// using copy constructor
	rectangle r1(5,7);
	rectangle r2 = r1;
	r1.display();
	r2.display();
	return 0;
}


