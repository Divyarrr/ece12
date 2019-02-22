#include<stdio.h>
void main()
{
    char a[100],b;
    int i,j,k,m=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i;a[j]!='\0';i++)
        {
            if(a[i]==a[j])
            k++;
            
        }
    }
    if(k>m)
     b=a[i];
        
   printf("%c",a[i]);
}
