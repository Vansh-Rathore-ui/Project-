#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void newnumber(int b);
void newnumber(int b) {
    printf("Enter the guessed number from 0 to 100:-");
    int a;
    scanf( "%d",&a);
    if ( (b+10)>=a && (b-10)<=a && b!=a) {
        printf("near your choosen number \n");
        newnumber(b);
    }
    else if(b==a) {
        printf("you chosen the correct number:- %d",b);
    }
    else {
        printf (" It is very far from you \n");
        newnumber(b);
    }
}
int main()

{
    srand(time(0));
    int random_number=rand()%100+1;
    printf ( " Welcome to Guess the number game \n ");
    printf( " Rules of the Game are :- \n \n 1)If there is your  chosen Number is in range of the correct number is +10 or -10 of it then statement comes near your chosen number otherwise other statement comes \n \n");
    newnumber(random_number);
    return 0;
}