#include<bits/stdc++.h>

using namespace std;

struct node {

    int data;

    node *link;
}

   void insertFornt(node *header , int data){
    node *newNode = (struct node*)malloc(struct node);

    if (newNode  == NULL){

        cout<<"Not excute"<<endl;
    }
   

    else {

        newNode->data = data;

        newNode->link = header->link;

        header->link = newNode;
    }

 }
   void insertLast( node *header, int data){

      node *ptr = header;

      while (ptr!= NULL){

        ptr = ptr ->link;
      }
   }


int main(){

    node *header;

    header = ( struct node*)malloc(sizeof(struct node));

    if (header== NULL){

        cout<< "Not Available"<<endl;

        return 0; 


    }
   
}
