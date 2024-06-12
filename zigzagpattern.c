#include<stdio.h>
int main()
{
    int num,x=2,m=1,c=0,l=1;
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        printf("%d ",l);
        for(int j=x;j<=num;j++)
        {
            m=m+j;
            printf("%d ",m);
            c+=1;
            if(c==1)
            {
                l=m-1;
            }
        }
        c=0;
        m=l;
        x=x+1;
        printf("\n");
           
    }
}