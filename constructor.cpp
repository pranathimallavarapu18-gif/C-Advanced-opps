#include<iostream>
#include<string>
using namespace std;
class robot{
	public:
		string name;
		string colour;
		robot(string robotname,string robotcolour)
		{name = robotname;
		colour = robotcolour;
		}
		rebot(const robot&existingrobot){
			name = existingrobot.name;
			colour = existingrobot.colour;
			cout<<"cloned robot is created";
		}
		void display(){
			cout<<"robot name is"<<name<<"robotcolour is"<<colour<<endl;
		}
};
int main()
{
	robot r1("c++","black");
	robot r2 = r1;
	r1.display();
	r2.display();
	return 0;
}
