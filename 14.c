#include<stdio.h>
void main()
{
    char a[100],b[100];
    int c,d=0,i;
    scanf("%d",&c);
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        d++;
    }
    if(c==d)
    {
        for(i=d-1;a[i]!='\0';i--)
        {
            if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u')
            {
                printf("%c",a[i]);
            }
        }
}
}
