#include<stdio.h>
void find_min_max(int a[], int n, int *min, int *max)
{
    int i;
    //*min= *max = a[0];
    //write your code here and comlete it
	int s=a[0],b=a[0];
	for(int I=1; I < n; I++){
		if(a[I]<s) {s = a[I];}
		if(a[I]>b) {b = a[I];}
	}
	*min= s;
	*max = b;
}
int main()
{
 int a[10],n,i;
 scanf("%d",&n);
 for(i=0; i<n; i++)
 scanf("%d",&a[i]);
 int max_val,min_val;
 find_min_max(a,n,&min_val,&max_val);
 printf("min=%d\nmax = %d", min_val,max_val);
 return 0;
}