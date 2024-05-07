#include<stdio.h>
int main()
{
    int num[10];
    int i;
    for (i=0;i<10;i++)
    {
        scanf("%d\n",&num[i]);
    }
    int a=0;
    for (i=0;i<10;i++)
    {
        if(a<num[i])
            a=num[i];

    }
    printf("The biggest number is:%d",a);
    return 0;
}
