#include<stdio.h>
int main()
{
    int num[3][3];
    int i;
    int j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)

       scanf("%d",&num[i][j]);
    }
    int a=0;

    for(i=0;i<1;i++)
    {
        for(j=0;j<3;j++)
            if(a<num[i][j])
            a=num[i][j];
    }
    printf("The biggest number in first row is:%d\n",a);

    int b=0;

    {for(i=1;i<2;i++)
    {
        for(j=0;j<3;j++)
            if(b<num[i][j])
            b=num[i][j];
    }
    printf("The biggest number in second row is:%d\n",b);
    }
     int c=0;

    for(i=2;i<3;i++)
    {
        for(j=0;j<3;j++)
            if(c<num[i][j])
            c=num[i][j];
    }
    printf("The biggest number in third row is:%d",c);

    return 0;
}
