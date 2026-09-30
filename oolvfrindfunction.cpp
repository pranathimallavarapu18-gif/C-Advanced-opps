#include<iostream>
using namespace std;
class distance
{
	private: 
	int km;
	int m;
	public:
	distance()//default constructor
	{
		km =0;
		m=0;
	}
	distance(int km,int m)//parameterized constructor
	{
		this->km = km;
		this->m = m;
		
	}
	void display(){
		cout<<km<<"km"<<m<<"m"<<endl;
	}

  friend distance operator+(distance d1,distance d2);//declaration of friend function
};
 //implemetation for friend function
     distance operator+(distance d1,distance d2){
 	distance temp;
 	temp.km = d1.km+ d2.km;
 	temp.m = d1.m+d2.m;
 	if(temp.m >=1000)
 	{
 		temp.km += temp.m/1000;
 		temp.m = temp.m%1000;
	 }
	 return temp;
 	
 }
int main()
{
  distance d1(5,500);
  distance d2(5,500);
  distance d3 = d1+d2;
  d3.display();
  return 0;	
}
