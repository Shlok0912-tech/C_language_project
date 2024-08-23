#include <stdio.h>

int main(){
   float P,R,T;
   /*
   -------NOTE:WRITE VALUE IN FORM OF REAL NUMBERS-------
   FORMULA OF SIMPLE INTEREST IS:

   Simple Interest=(P*R*T)/100
   Where,
   P = Principal amount (the initial amount of money)
   R = Annual interest rate (in percentage)
   T = Time period (in years)
   */
   printf("enter P\n");
   scanf("%f", &P);

   printf("enter R\n");
   scanf("%f", &R);

   printf("enter T\n");
   scanf("%f", &T);

   printf("The value of simple interest is %f", (P*R*T)/100);
     return 0;
}