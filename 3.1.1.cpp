#include <iostream>
#include<string>
using namespace std;

class Name{
	private: 
	string fullname;
		
		public:
			Name(string fullname){
				this->fullname=fullname;
			}
			Name operator+(const Name&s){
				return Name(this->fullname+s.fullname);
			}
			void display(){
				cout<<"FullName is: "<<this->fullname<<endl;
			}
};
int main(){
	Name firstname("Prasanna");
	Name lastname("Veera");
	Name fullname=firstname+lastname;
	fullname.display();
	return 0;
	}
