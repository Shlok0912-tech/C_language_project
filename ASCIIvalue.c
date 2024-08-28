#include <stdio.h>
//https://www.ascii-code.com/

int main(){
     char ch;
     printf("Enter ch\n");
     scanf("%c", &ch);
     printf("The value of character is %d\n", ch);
     // 97 , 122
     if(ch>=97 && ch<=122){
        printf("This character is lowercase\n");
     }
     else{
        printf("This character is not lowercase");
     }
    return 0;
}