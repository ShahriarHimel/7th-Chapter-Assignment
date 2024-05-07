#include<stdio.h>
int main()
{
    int i,j;
    int num1[3][3];
    int num2 [3][3];
    int num3[3][3];
   printf("Enter num1");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&num1[i][j]);
    }
    printf("Enter num2");

     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&num2[i][j]);
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        num3[i][j]=num1[i][j]+num2[i][j];
    }
    printf("%d",num3[i][j]);
    return 1;

}
