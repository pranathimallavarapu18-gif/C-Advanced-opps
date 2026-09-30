#include<iostream>
#include<string.h>
using namespace std;
class name
{
	private:
	 string  fullname;
	public:
		name(string fullname){
			this->fullname = fullname;
		}
		name operator + (const name&s){
			return name(this -> fullname +" "+ s.fullname);
		}
		void display(){
			cout<<"full name is:"<<this->fullname<<endl;
		}
		};
int main()
{
	name fistname("pranathi");
	name lastname("mallavarapu");
	name fullname = fistname+lastname;
	fullname.display();
	return 0;
}
