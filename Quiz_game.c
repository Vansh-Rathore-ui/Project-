#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
void subjectmaths();
void subjectmaths() {
// By selecting each subject criteria using if else statements
    srand(time(0));

    int random_question[5];

    char a,b,c,d,e,f,g,h,i,j;
    int marks=0;
    for(int i=0; i<5; i++) {
        random_question[i]=(rand()%9)+1;
    }
    int repeat;
    for( int i=0; i<4; i++) {

        if( random_question[i]==random_question[i+1] ) {

            random_question[i]=random_question[i+1]+1;
        }
        for(j=0; j<=i; j++) {
            if(random_question[j]>random_question[j+1]) {
                repeat=random_question[j];
                random_question[j]=random_question[j+1];
                random_question [j+1]=repeat;
            }
        }

    }

    for (int i=0; i<5; i++) {
        if (random_question[i]== 1) {
            printf ("Q%d ",i+1);
            printf("5+7= ? \n A) 12\n B) 13 \n C) 14\n D) 15 \n Enter the answer:- \n");

            scanf("%s", &a);

            if ( a=='A') {
                marks++;
            }
            else;
        }
        if (random_question[i]== 2) {
            printf ("Q%d ",i+1);

            printf("6*7=? \n A) 42\n B) 32\n C) 35\n D) 37 \n Enter the answer:- \n");
            scanf("%s", &b);

            if ( b=='A') {
                marks++;
            }
            else;
        }
        if (random_question[i]== 3) {
            printf ("Q%d ",i+1);

            printf("7/10= ? \n A) 0.7 \n B) 13 \n C) 14\n D) 15 \n Enter the answer:- \n");
            scanf("%s", &c);

            if ( c=='A') {
                marks++;
            }
            else;
        }
        if (random_question[i]== 4) {
            printf ("Q%d ",i+1);

            printf("(70/2)*10= ? \n A) 200 \n B) 350 \n C) 140\n D) 105 \n Enter the answer:- \n");
            scanf("%s", &d);

            if ( d=='B') {
                marks++;
            }
            else;
        }
        if (random_question[i]== 5) {
            printf ("Q%d ",i+1);
            printf("1k= ? \n A) 100 \n B) 1000\n C) 14000\n D) 145275 \n Enter the answer:- \n");
            scanf("%s", &e);

            if ( e=='B') {
                marks++;
            }
            else;
        }
        if (random_question[i]== 6) {
            printf ("Q%d ",i+1);
            printf("1M= ? \n A) 100 \n B) 100000\n C) 14000\n D) 145275 \n Enter the answer:- \n");
            scanf("%s", &f);

            if ( f=='B') {
                marks++;
            }
            else;
        }
        if (random_question[i]== 7) {
            printf ("Q%d ",i+1);
            printf("2^3= ? \n A) 8 \n B) 16\n C) 14\n D) 10 \n Enter the answer:- \n");
            scanf("%s", &g);

            if ( g=='A') {
                marks++;
            }
            else;
        }
        if (random_question[i]== 8) {
            printf ("Q%d ",i+1);
            printf("18*9= ? \n A) 162 \n B) 100\n C) 1200\n D) 145 \n Enter the answer:- \n");
            scanf("%s", &h);

            if ( h=='A') {
                marks++;
            }
            else;
        }

        if (random_question[i]== 9) {
            printf ("Q%d ",i+1);
            printf("10*2+10= ? \n A) 30 \n B) 100\n C) 120\n D) 1475 \n Enter the answer:- \n");
            scanf("%s", &i);

            if ( i=='A') {
                marks++;
            }
            else;
        }
        if (random_question[i]== 10) {
            printf ("Q%d ",i+1);
            printf("100-10*2 ? \n A) 80\n B) 100\n C) 400\n D) 180 \n Enter the answer:- \n");
            scanf("%s", &j);

            if ( j=='A') {
                marks++;
            }
            else;
        }
    }

    printf("marks is %d/5", marks);

}
void subjectenglish();
void subjectenglish() {
    srand(time(0));

    int random_question[5];

    char a,b,c,d,e,f,g,h,i,j;
    int marks=0;
    for(int i=0; i<5; i++) {
        random_question[i]=(rand()%9)+1;
    }
    int repeat;
    for( int i=0; i<4; i++) {

        if( random_question[i]==random_question[i+1] ) {

            random_question[i]=random_question[i+1]+1;
        }
        for(j=0; j<=i; j++) {
            if(random_question[j]>random_question[j+1]) {
                repeat=random_question[j];
                random_question[j]=random_question[j+1];
                random_question [j+1]=repeat;
            }
        }

    }
    for (int i=0; i<5; i++) {
        if (random_question[i]== 1) {
            printf ("Q%d ",i+1);
            printf("What is the capital of France?\n A) Italy \n B) Germany \n C) Finland\n D) Berlin \n Enter the answer:- \n");



            scanf("%s", &a);

            if ( a=='A') {
                marks++;
            }
            else;
        }
        if (random_question[i]== 2) {
            printf ("Q%d ",i+1);
            printf("What is the largest planet in our solar system?  \n A) Jupiter\n B) Neptune\n C) Earth\n D) Mars\n Enter the answer:- \n");
            scanf("%s", &b);

            if ( b=='A') {
                marks++;
            }
            else;
        }
        if (random_question[i]== 3) {
            printf ("Q%d ",i+1);
            printf("Choose the correct word to complete the sentence:- \n She ___ to the market every Sunday.\n A) goes \n B) go \n C) going\n D) gonen Enter the answer:- \n");
            scanf("%s", &c);
            if ( c=='A') {
                marks++;
            }
            else;
        }
        if (random_question[i]== 4) {
            printf ("Q%d ",i+1);
            printf("Pick the word that best completes the sentence:- \n He is the ___ person for the job. \n A) good \n B) better \n C) best \n D) more better \n Enter the answer:- \n");
            scanf("%s", &d);

            if ( d=='C') {
                marks++;
            }
            else;
        }
        if (random_question[i]== 5) {
            printf ("Q%d ",i+1);

            printf("Identify the synonym of the word 'happy':-\n A) Sad \n B) Joyful \n C) Angry\n D) Tired\n  Enter the answer:- \n");
            scanf("%s", &e);

            if ( e=='B') {
                marks++;
            }
            else;
        }
        
if (random_question[i]== 6){
   printf ("Q%d ",i+1);
   printf("Which of these is the fastest land animal?\n A) Lion \nB) Elephant \nC) Cheetah \nD) Kangaroo \n Enter the answer:- \n");
            scanf("%s", &f);

            if ( f=='C') {
                marks++;
            }
            else;
            
        }
        if (random_question[i]== 7){
   printf ("Q%d ",i+1);
   printf("What is the boiling point of water at sea level?\nA) 50°C,\nB) 100°C \nC) 150°C, \nD) 200°C \n Enter the answer:-");
            scanf("%s", &g);

            if ( g=='B') {
                marks++;
            }
            else;
            
        }
        if (random_question[i]== 8){
   printf ("Q%d ",i+1);
   printf("Which sentence is correctly punctuated?\nA) I love pizza; it's my favorite food.\nB) I love pizza, it's my favorite food.\nC) I love pizza it's my favorite food.\n D) I love pizza: it's my favorite food.\n Enter the answer:-");
            scanf("%s", &h);

            if ( h=='A') {
                marks++;
            }
            else;
            
        }
       if (random_question[i]== 9){
   printf ("Q%d ",i+1);
   printf("Choose the correct form of the verb:\n 'She _____ to the store every Saturday.\n A) go \n B) goes\n C) going\n D) gone \n Enter the answer:-");
            scanf("%s", &i);

            if ( i=='B') {
                marks++;
            }
            else;
            
        }
        
       if (random_question[i]==10){
   printf ("Q%d ",i+1);
   printf("Which sentence is in the future tense?\n a) She is studying now.\n b) She studied yesterday. \n c) She will study tomorrow. \n d) She studies every day. \n Enter the answer:-");
            scanf("%s", &j);

            if ( j=='C') {
                marks++;
            }
            else;
            
        }
        

        printf("marks is %d/5", marks);

    }
    }

    void subjectscience();
    void subjectscience () {
        srand(time(0));

    int random_question[5];

    char a,b,c,d,e,f,g,h,i,j;
    int marks=0;
    for(int i=0; i<5; i++) {
        random_question[i]=(rand()%9)+1;
    }
    int repeat;
    for( int i=0; i<4; i++) {

        if( random_question[i]==random_question[i+1] ) {

            random_question[i]=random_question[i+1]+1;
        }
        for(j=0; j<=i; j++) {
            if(random_question[j]>random_question[j+1]) {
                repeat=random_question[j];
                random_question[j]=random_question[j+1];
                random_question [j+1]=repeat;
            }
        }

    }
    
        if(random_question[i]==1){
        printf ("Q%d ",i+1);
        printf("What is the chemical symbol for water? \n A) H2O \n B) O2 \n C) CO2 \n D) NaCl \n Enter the answer:- \n");

        scanf("%s", &a);

        if ( a=='A') {
            marks++;
        }
        else;
        }
        if(random_question[i]==2){
        printf ("Q%d ",i+1);
        printf("What planet is known as the Red Planet? \n A) Earth \n B) Mars \n C) Jupiter \n D) Venus \n Enter the answer:- \n");
        scanf("%s", &b);

        if ( b=='B') {
            marks++;
        }
        else;
        }
       if(random_question[i]==3){
        printf ("Q%d ",i+1);
        printf("Which part of the plant conducts photosynthesis? \n A) Root  \n B) Stem \n C) Leaf  \n D) Flower \n Enter the answer:- \n");
        scanf("%s", &c);

        if ( c=='B') {
            marks++;
        }
        else;
        }
       if(random_question[i]==4){
        printf ("Q%d ",i+1);
        printf("What is the primary source of energy for Earth? \n A) The Moon  \n B) The Sun  \n C) The Stars  \n D) The Wind \n Enter the answer:- \n");
        scanf("%s", &d);

        if ( d=='B') {
            marks++;
        }
        else;
        }
       if(random_question[i]==5){
        printf ("Q%d ",i+1);
        
        printf(" What is the basic unit of life? \n A) Tissue  \n B) Organ  \n C) Cell  \n D) System \n Enter the answer:- \n");
        scanf("%s", &e);

        if ( e=='C') {
            marks++;
        }
        else;
        }
        if(random_question[i]==6){
        printf ("Q%d ",i+1);
        
        printf(" What is the basic unit of life? \n A) Tissue  \n B) Organ  \n C) Cell  \n D) System \n Enter the answer:- \n");
        scanf("%s", &f);

        if ( f=='C') {
            marks++;
        }
        else;
        }
        if (random_question[i]== 7){
   printf ("Q%d ",i+1);
   printf("What is the formula of carbon dioxide :- \n A)O2 \n B)CO2 \n C)NO2 \n D) NaI \n Enter the answer:-");
            scanf("%s", &g);

            if ( g=='B') {
                marks++;
            }
            else;
            
        }
        if (random_question[i]== 8){
   printf ("Q%d ",i+1);
   printf("What force keeps us grounded on Earth? \n A) Magnetism \n B) Gravity \n C) Friction \n D) Inertia\nA) 50°C,\nB) 100°C \nC) 150°C, \nD) 200°C \n Enter the answer:-");
            scanf("%s", &h);

            if ( h=='B') {
                marks++;
            }
            else;
            
        }
        if (random_question[i]== 9) {
            printf ("Q%d ",i+1);
            printf("What is the farthest planet from sun ?  \n A) Neptune\n B) Earth\n C) Uranus\n D) Jupiter \n Enter the answer:- \n");
            scanf("%s", &i);

            if ( i=='A') {
                marks++;
            }
            else;
        }
       if (random_question[i]== 10) {
            printf ("Q%d ",i+1);
            printf(" What is the center of an atom called?\n A) Electron \n B) Neutron \n C) Nucleus \n D) Proton \n Enter the answer:- \n");
            scanf("%s", &i);

            if ( i=='A') {
                marks++;
            }
            else;
        }
        printf("marks is %d/5", marks);

    }
    


    int main()\\trying to resolve the error of repeating questions 
    {
        
        int marks=0;
        char S;
        printf("Choose a subject:- \n M for Maths\n E for English \n S for science \n \n Enter the subject code:-");
        scanf("%s",&S);
        if ( S=='M') {
            subjectmaths();
        }
        else if( S=='E') {
            int array=0;
            subjectenglish();
        }
        else if ( S=='S') {
            subjectscience();
        }
        else {
            printf("wrong choice");
        }
        


        return 0;
    }
    