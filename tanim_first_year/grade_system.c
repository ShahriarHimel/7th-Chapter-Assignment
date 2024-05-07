#include <stdio.h>

void evaluate_result(int marks){
    if(marks < 0){
        printf("Marks must be equal or greater than zero!\n\n");
        return;
    }

    printf("---------------------------\n");
    printf("Your Grade: ");
    if(marks <= 32){
        printf("F\n");
    }
    else if(marks <= 39){
        printf("D\n");
    }
    else if(marks <= 49){
        printf("C\n");
    }
    else if(marks <= 59){
        printf("B\n");
    }
    else if(marks <= 69){
        printf("A-\n");
    }
    else if(marks <= 79){
        printf("A\n");
    }
    else if(marks <= 100){
        printf("A+\n");
    }
    else{
        printf("Invalid marks!\n");
    }

    printf("---------------------------\n\n");
}


int main(){
    int marks;
    printf("\n\n");
    printf("Enter your marks: ");
    scanf("%d", &marks);
    evaluate_result(marks);
}
