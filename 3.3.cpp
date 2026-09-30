#include<iostream>
using namespace std;
class Distance{
	int meters;
	public:
		Distance(int m=0): meters(m){
		}
		friend Distance operator+(Distance d1,Distance d2);
		friend Distance operator++(Distance &d);
		void display(){
			cout<<meters<<"meters"<<endl;
			
		}
		
};
     Distance operator+(Distance d1,Distance d2)
	 {
	return Distance(d1.meters+d2.meters);
	
}
     Distance operator++(Distance &d)
	 {
	d.meters++;
	return d;
}
int main(){
	Distance d1(10),d2(20);
	Distance d3 = d1+d2;
	cout<<"d1 +d2 = ";d3.display();
	++d1;
	cout<<"after increment,d1= ";d1.display();
	return 0;
}

