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
      for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
         if(a<num[i][j])
        a=num[i][j];
    }



     printf("The biggest number is:%d",a);
     return 0;

}

