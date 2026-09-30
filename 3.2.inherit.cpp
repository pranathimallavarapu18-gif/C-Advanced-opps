#include<iostream>
using namespace std;
class complex {
	int real,img;
	public:
		complex(int r=0,int,i=0):real(r),img(i) {}
		//binary operator overloading
		complex opreator+(complex c) {
			return complex(real +c.real,img +c.img);
			}
			//unary operator overloading
			complex operator-{
				return complex(-real, -img);
				
			}
			void display(){
				cout<<real<<"+"<<img<<"i"<<endl;
			}
};
int main()
{
	complex c1(3,4),c2(1,2);
	complex c3 = c1+c2;
	complex c4 = -c1;
	cout<<"c1 = ";c1.display();
	cout<<"c2= ";c2display();
	cout<<"c1+c2 = ";c3.display();
	cout<<"-c1= ";c4.display();
	return0;
}
