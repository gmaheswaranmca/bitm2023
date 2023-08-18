#include<stdio.h>
int findSum(int a, int b){
	return a + b;
}

int main(){
	printf("%d\n",findSum(10,20));
	int (*pfindSum)(int, int);
	pfindSum = findSum; //pfindSum = &findSum;
	printf("%d\n",(*pfindSum)(10,20));
	return 0;
}

/*
 float a,b,c;
 float* p[3];
 p[0] = &a;
 p[1] = &b;
 p[2] = &c;
 
 
 int (*pfindSum[3])(int, int);
*/