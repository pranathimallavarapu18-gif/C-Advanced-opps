#include<iostream>
#include<conio.h>
class test 
{
	public:
		inline int cube(int y){
			return y*y*y ;
			
		}
		
};
int main()
{
	test*t = new test();
	int x;
  std::cout<<"enter the number:"<<std::endl;
  std::cin>>x;
  std::cout<<"the cube of "<<x<<"is :"<<t->cube(x)<<std::endl;
 
  return 0;
  
	
}
