#include<stdio.h>
#include<math.h>
int main()
{
    int s, a, b, c, area,num,d,pal=0;
    scanf("%d %d %d",&a,&b,&c);
    s = (a + b + c)/2;
    //area = sqrt(s* (a - s) * (b - s) * (c -s));
	area = sqrt(s* (s-a) * (s-b) * (s-c));
    printf("Area of triangle=%d",area);
    num=area;
    while(area!=0)
    {
        d=area%10;
        pal=d+(pal*10);
        area=area/10;
    }
    if(num==pal)
    printf("\nArea is polindrome");
    else
    printf("\nArea is not polindrome");
    return 0;
    
}