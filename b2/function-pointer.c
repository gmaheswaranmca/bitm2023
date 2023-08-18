#include<stdio.h>
int findSum(int a, int b){
	return a + b;
}
int findDiff(int a, int b){
	return a - b;
}
int main()
{
	printf("%d\n",findSum(10,20));
	printf("%d\n",findDiff(100,20));
	int (*ptrFn)(int,int);
	ptrFn = findSum;
	printf("%d\n",(*ptrFn)(10,20));
	ptrFn = findDiff;
	printf("%d\n",(*ptrFn)(100,20));
	return 0;
}
