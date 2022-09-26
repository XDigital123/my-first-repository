#include <stdio.h>
void TofikKhan();
void ShahbajKhan();

int main(){
    char ch;
    printf("enter T for Tofik Khan and S for Shahbaj Khan :\n");
    scanf("%c", &ch);
    if ( ch == 'T') {
        TofikKhan();
    }
    else {
        ShahbajKhan();
    }
    }
    

void TofikKhan() {
    printf("I am a MCA student in Sage University Indore\n");
}
void ShahbajKhan(){
    printf("shahbaj khan Indore");
}