#include<stdio.h>
#include<math.h>
void subjectmaths();
void subjectmaths() {
// By selecting each subject criteria using if else statements
    char a,b,c,d,e;
   int marks=0;
   printf(" Q1:5+7= ? \n A) 12\n B) 13 \n C) 14\n D) 15 \n Enter the answer:- \n");
    
    scanf("%s", &a);

    if ( a=='A') {
        marks++;
        }
        else;
        printf("Q2: 6*7=? \n A) 42\n B) 32\n C) 35\n D) 37 \n Enter the answer:- \n");
        scanf("%s", &b);

    if ( b=='A') {
        marks++;
        }
        else;
        printf(" Q3:7/10= ? \n A) 0.7 \n B) 13 \n C) 14\n D) 15 \n Enter the answer:- \n");
    scanf("%s", &c);

    if ( c=='A') {
        marks++;
        }
        else;
    
  printf(" Q4:(70/2)*10= ? \n A) 200 \n B) 350 \n C) 140\n D) 105 \n Enter the answer:- \n");
    scanf("%s", &d);

    if ( d=='B') {
        marks++;
        }
        else;
       printf(" Q5:1k= ? \n A) 100 \n B) 1000\n C) 14000\n D) 145275 \n Enter the answer:- \n");
    scanf("%s", &e);

    if ( e=='B') {
        marks++;
        }
        else;
    
    
   printf("marks is %d/5", marks);
   
}
void subjectenglish();
void subjectenglish(){
char a,b,c,d,e;
   int marks=0;
   printf(" Q1: What is the capital of France?\n A) Italy \n B) Germany \n C) Finland\n D) Berlin \n Enter the answer:- \n");
   


    scanf("%s", &a);

    if ( a=='A') {
        marks++;
        }
        else;
        printf("Q2:What is the largest planet in our solar system?  \n A) Jupiter\n B) Neptune\n C) Earth\n D) Mars\n Enter the answer:- \n");
        scanf("%s", &b);

    if ( b=='A') {
        marks++;
        }
        else;
        printf(" Q3:Choose the correct word to complete the sentence:- \n She ___ to the market every Sunday.\n A) goes \n B) go \n C) going\n D) gonen Enter the answer:- \n");
    scanf("%s", &c);
    if ( c=='A') {
        marks++;
        }
        else;
    
  printf(" Q4:Pick the word that best completes the sentence:- \n He is the ___ person for the job. \n A) good \n B) better \n C) best \n D) more better \n Enter the answer:- \n");
    scanf("%s", &d);

    if ( d=='C') {
        marks++;
        }
        else;
       printf("Identify the synonym of the word 'happy':-\n A) Sad \n B) Joyful \n C) Angry\n D) Tired\n  Enter the answer:- \n");
    scanf("%s", &e);

    if ( e=='B') {
        marks++;
        }
        else;
    
    
   printf("marks is %d/5", marks);
   
}

void subjectscience();
    void subjectscience (){
   char a,b,c,d,e;
   int marks=0;
   printf(" Q1:What is the chemical symbol for water? \n A) H2O \n B) O2 \n C) CO2 \n D) NaCl \n Enter the answer:- \n");
    
    scanf("%s", &a);

    if ( a=='A') {
        marks++;
        }
        else;
        printf("Q2:What planet is known as the Red Planet? \n A) Earth \n B) Mars \n C) Jupiter \n D) Venus \n Enter the answer:- \n");
        scanf("%s", &b);

    if ( b=='B') {
        marks++;
        }
        else;
        printf(" Q3:Which part of the plant conducts photosynthesis? \n A) Root  \n B) Stem \n C) Leaf  \n D) Flower \n Enter the answer:- \n");
    scanf("%s", &c);

    if ( c=='B') {
        marks++;
        }
        else;
  printf(" Q4:What is the primary source of energy for Earth? \n A) The Moon  \n B) The Sun  \n C) The Stars  \n D) The Wind \n Enter the answer:- \n");
    scanf("%s", &d);

    if ( d=='B') {
        marks++;
        }
        else;
       printf(" Q5:What is the basic unit of life? \n A) Tissue  \n B) Organ  \n C) Cell  \n D) System \n Enter the answer:- \n");
    scanf("%s", &e);

    if ( e=='C') {
        marks++;
        }
        else;
    
    
   printf("marks is %d/5", marks);
   
}


    int main()
    {
    int marks=0;
        char S;
        printf("Choose a subject:- \n M for Maths\n E for English \n S for science \n \n Enter the subject code:-");
        scanf("%s",&S);
        if ( S=='M') {
            subjectmaths();
        }
else if( S=='E'){
subjectenglish();
}
else if ( S=='S'){
subjectscience();
}
else {
printf("wrong choice");
}


        return 0;
    }
    