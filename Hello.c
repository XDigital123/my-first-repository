#include <stdio.h>
int main(){
// Create an integer variable that will store the number we get from the user
char myNum;

// Ask the user to type a number
printf("Type a name : \n");

// Get and save the number the user types
scanf("%c", &myNum);

// Output the number the user typed
printf("welcome : %c", myNum);
return 0;
}