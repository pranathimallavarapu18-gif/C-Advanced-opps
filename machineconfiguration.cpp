//7. Manufacturing Machine Configuration 
#include<iostream>
#include<string>
using namespace std;
class Machine{
	private:
		int id;
		string config;
		int pow;
	public:
		// parameterized
		Machine(int a,string b,int c){
			id=a;
			config=b;
			pow=c;
		}
		//copy constructor
		Machine(Machine &s){
			id=s.id;
			config=s.config;
			pow=s.pow;
		}
		friend void display(Machine o1,Machine o2); 
};
void display(Machine o1,Machine o2){
	cout<<"Parameterized contructor"<<endl;
	cout<<"id: "<<o1.id<<endl;
	cout<<"configuration: "<<o1.config<<endl;
	cout<<"power: "<<o1.pow<<endl;
	cout<<"\nCopy contructor"<<endl;
	cout<<"id: "<<o2.id<<endl;
	cout<<"configuration: "<<o2.config<<endl;
	cout<<"power: "<<o2.pow<<endl;
}
int main(){
	Machine o1(101,"Automatic",50);
	Machine o2(o1);
	display(o1,o2);
}

