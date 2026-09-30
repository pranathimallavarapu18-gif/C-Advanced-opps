#include<stdio.h>
#include<stdlib.h>
#define size 10
int hashtable[size];
void initilize( ){
	int i;
	for(i=0;i<size;i++)
	hashtable[i]=-1;
}
int hashfunction(int key){
	return key%size;
}
void insert(){
	int key,index,start;
	printf("enter key element:");
	scanf("%d",&key);
	index = key%size;
	start = index;
	while(hash[index]!=-1){
		index = (index+1)%size;
		if
	}
}
