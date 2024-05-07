#include <stdio.h>

int main(){
    int unit, bill;
    printf("Enter unit: ");
    scanf("%d", &unit);

    if (unit <= 0){
        printf("Unit must be greater than zero!");
        return 0;
    }

    else if(unit <= 100){
        bill = 10 * unit;
    }

    else if(unit <= 200){
        bill = 12 * unit;
    }

    else if(unit <= 300){
        bill = 14 * unit;
    }

    else{
        bill = 16 * unit;
    }

    printf("Your bill is: %d", bill);
    return 0;
}
