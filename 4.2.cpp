#include<iostream>
using namespace std;
class base {
	public:
		base(){
			cout<<"base costructor called"<<endl;
			
		}
		~base(){
			cout<<"base destructor called "<<endl;
		}
};
class derived : public base{
	public:
		derived(){
			cout<<"derived constructor called"<<endl;
		}
		~derived(){
			cout<<"derived destructor called "<<endl;
		}
};
int main(){
	cout<<"creating derived objects"<<endl;
	derived d;
	cout<<"end of main object goes out of scope"<<endl;
	return 0;
}
