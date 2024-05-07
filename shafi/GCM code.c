#include<stdio.h>
int main()
{
    int num1,num2,i,s;
    scanf("%d %d",&num1,&num2);
    if (num1>num2)
        for(i=1;i<=num2;i++)
    {
        if(num1%i==0 && num2%i==0)
            s=i;
    }
     if (num1<num2)
        for(i=1;i<=num1;i++)
    {
        if(num1%i==0 && num2%i==0)
            s=i;
    }
    printf("The GCM number is:%d",s);
    return 0;

}
