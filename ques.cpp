#include<iostream>
using namespace std;
class Rectangle
{
	public:
	int l; //member variables
	int b;
	Rectangle(int l, int b) //local variables
	{
		this->l=l;
		this->b=b;
		cout<<"rectangle is created"<<endl;
	}
	void display()
	{
		cout<<"area of the rectangle is :"<<l*b<<endl;
	}
};
int main()
{
Rectangle r1(2,3);
r1.display();
}
