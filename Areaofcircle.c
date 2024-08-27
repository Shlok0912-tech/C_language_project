#include <stdio.h>
/*
NOTE:WRITE IN FORM OF REAL NUMBERS

AREA OF CIRCLE=Pi*R*R
WHERE,
Pi=3.14 and R=Radius of circle
Therefore
AREA OF CIRCLE=3.14*R*R
*/



int main(){
    float R;
    
    printf("Enter R\n");
    scanf("%f", &R);

    printf("The area of this circle is %.2f", 3.14*R*R);

    return 0;
}