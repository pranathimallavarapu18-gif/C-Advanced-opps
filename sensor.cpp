//Industrial Sensor Monitoring System
#include<iostream>
using namespace std;
class Sensor{
	float temperature;
	float pressure;
	public:
		//parameterized constructor
		Sensor(float temp,float press){
			temperature=temp;
			pressure=press;
		}
		//copy constructor
		Sensor(const Sensor &s){
			temperature=s.temperature;
			pressure=s.pressure;
		}
		friend void compare(const Sensor &s1,const Sensor &s2);
};
void compare(const Sensor &s1,const Sensor &s2){
	cout<<"parameterized constructor"<<endl;
	cout<<"\nLatest Reading"<<endl;
	cout<<"temperature: "<<s1.temperature<<"C"<<endl;
	cout<<"Pressure: "<<s1.pressure<<"Pa"<<endl;
	cout<<"--------------------------------"<<endl;
	cout<<"\ncopy constructor"<<endl;
	cout<<"\nHistorical Record"<<endl;
	cout<<"temperature: "<<s2.temperature<<"C"<<endl;
	cout<<"Pressure: "<<s2.pressure<<"Pa"<<endl;
	
	if(s2.temperature>90){
		cout<<"\nWarning: Abnormal temperature"<<endl;
		
	}
	if(s2.pressure>110){
		cout<<"\nWarning: Abnormal pressure"<<endl;
	}
	if(s2.temperature<=90 and s2.pressure<=110){
		cout<<"readings are within normal limits"<<endl;
	}
}
int main(){
	Sensor s1(89,130);
	Sensor s2=s1;
	compare(s1,s2);
	return 0;
}

