#include<stdio.h>
void main()
{
    int a,r,s=0,m;
    scanf("%d",&a);
    while(a)
    {
        r=a%10;
        a=a/10;
        
    
m=r *r;
s=s+m;
}
printf("%d",s);
}
