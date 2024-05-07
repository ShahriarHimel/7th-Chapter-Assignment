#include <stdio.h>

int get_bill(int unit){
    int bill = 0;

    if (unit <= 0){
        printf("Unit must be greater than zero!");
        return -1;
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

    else {
        bill = 16 * unit;
    }

    return bill;
}

int main(){
    int unit, bill;
    printf("Enter unit: ");
    scanf("%d", &unit);

    bill = get_bill(unit);

    if (bill != -1){
        printf("Your bill is: %d\n\n", bill);
    }

    return 0;
}

