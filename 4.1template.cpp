#include<iostream>
using namespace std;
template <typename T>
T getmax(T a, T b){
	return (a>b) ? a : b;
	
}
int main(){
	cout<<getmax<int>(10, 20)<<endl;
	cout<<getmax<double>(3.23, 4.678)<<endl;
	cout<<getmax<char>('a','h')<<endl;
	return 0;
}
