#include<stdio.h>
#include<stdlib.h>

 struct node{

    int data;

    node *link;
  }

  int main() {

    node *header;

    header =  (struct node *)malloc(sizeof node);

    return 0;
  }