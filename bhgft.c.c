#include<stdio.h>
 int main()
{
    int sum=0;
    int a[]={13,7,5,3,1,11};
    for(int x=0;x<6;x++)
    {
        for(int b=x+1;b<6;b++)
        {
            if(a[b]>a[x])
            sum=sum+a[b];
        }
    }
    printf("%d",sum);
    return 0;
}