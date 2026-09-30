//Vehicle Rental System
#include<iostream>
#include<string>
using namespace std;
class Vehicle{
	string vehiclename;
	int rentcharge;
	public :
	    Vehicle(){
		vehiclename="Honda";
		rentcharge=1000;
		
	}
	Vehicle(const Vehicle &v) {
    vehiclename = v.vehiclename;
    rentcharge = v.rentcharge;
    }  
	friend void display(Vehicle original,Vehicle booked);
	
};
void display(Vehicle original,Vehicle booked){
	cout<<"default constructor"<<endl;
	cout<<"original"<<endl;
	cout<<"Vehicle name: "<<original.vehiclename<<endl;
	cout<<"rent charge: "<<original.rentcharge<<endl;
    
    cout<<"\ncopy constructor"<<endl;
    cout<<"booked "<<endl;
	cout<<"Vehicle name: "<<booked.vehiclename<<endl;
	cout<<"rent charge: "<<booked.rentcharge<<endl;
}
int main(){
	Vehicle v1;
	//Vehicle v2=v1;
	Vehicle v2(v1);
	display(v1,v2);
	
}

