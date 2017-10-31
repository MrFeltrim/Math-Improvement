#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>                                                           // for gettimeofday()

// Francois was here ! 

int main(){

char reply;
char reply2;

struct timeval t1, t2;
float elapsedTime, elapsedTime1;

do
{
    reply2 = 0; //set reply2 back to zero to stop loop bug when trying again.
    printf("Ready to start? y/n\n");
    scanf(" %c", &reply);

    if (reply == 'y')
    {

    srand(time(NULL));

    int choice;
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,n16,n17,n18,n19,n20; // n is for numbers in the sum
    int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;                                         // a is for the users answer
    int r1,r2,r3,r4,r5,r6,r7,r8,r9,r10;                                         // r is for the result
    int total = 0;                                                              // total answer

    char y;


  do
  {
    printf("Good day, \n1.) Addition? \n2.) Subtraction? \n3.) Multiplication? \n4.) Division?\n5.) Times Table.\n\n");
    scanf("%d", &choice );

    if(choice == 1)
    {
      gettimeofday(&t1, NULL);
      y = '+';
      n1 = rand() % 20;
      n2 = rand() % 20;
      n3 = rand() % 20;
      n4 = rand() % 20;
      n5 = rand() % 20;
      n6 = rand() % 20;
      n7 = rand() % 20;
      n8 = rand() % 20;
      n9 = rand() % 20;
      n10 = rand() % 20;
      n11 = rand() % 20;
      n12 = rand() % 20;
      n13 = rand() % 20;
      n14 = rand() % 20;
      n15 = rand() % 20;
      n16 = rand() % 20;
      n17 = rand() % 20;
      n18 = rand() % 20;
      n19 = rand() % 20;
      n20 = rand() % 20;

      r1 = n1 + n2;                                                             // r is for result
      r2 = n3 + n4;
      r3 = n5 + n6;
      r4 = n7 + n8;
      r5 = n9 + n10;
      r6 = n11 + n12;
      r7 = n13 + n14;
      r8 = n15 + n16;
      r9 = n17 + n18;
      r10 = n19 + n20;
    }
    else if(choice == 2)
    {
      gettimeofday(&t1, NULL);
      y = '-';
      n1 = rand() % 20;
      n2 = rand() % 20;
      n3 = rand() % 20;
      n4 = rand() % 20;
      n5 = rand() % 20;
      n6 = rand() % 20;
      n7 = rand() % 20;
      n8 = rand() % 20;
      n9 = rand() % 20;
      n10 = rand() % 20;
      n11 = rand() % 20;
      n12 = rand() % 20;
      n13 = rand() % 20;
      n14 = rand() % 20;
      n15 = rand() % 20;
      n16 = rand() % 20;
      n17 = rand() % 20;
      n18 = rand() % 20;
      n19 = rand() % 20;
      n20 = rand() % 20;

      r1 = n1 - n2;                                                             // r is for result
      r2 = n3 - n4;
      r3 = n5 - n6;
      r4 = n7 - n8;
      r5 = n9 - n10;
      r6 = n11 - n12;
      r7 = n13 - n14;
      r8 = n15 - n16;
      r9 = n17 - n18;
      r10 = n19 - n20;
    }
    else if(choice == 3)
    {
      gettimeofday(&t1, NULL);
      y = 'x';
      n1 = rand() % 12;
      n2 = rand() % 12;
      n3 = rand() % 12;
      n4 = rand() % 12;
      n5 = rand() % 12;
      n6 = rand() % 12;
      n7 = rand() % 12;
      n8 = rand() % 12;
      n9 = rand() % 12;
      n10 = rand() % 12;
      n11 = rand() % 12;
      n12 = rand() % 12;
      n13 = rand() % 12;
      n14 = rand() % 12;
      n15 = rand() % 12;
      n16 = rand() % 12;
      n17 = rand() % 12;
      n18 = rand() % 12;
      n19 = rand() % 12;
      n20 = rand() % 12;

      r1 = n1 * n2;                                                              // r is for result
      r2 = n3 * n4;
      r3 = n5 * n6;
      r4 = n7 * n8;
      r5 = n9 * n10;
      r6 = n11 * n12;
      r7 = n13 * n14;
      r8 = n15 * n16;
      r9 = n17 * n18;
      r10 = n19 * n20;
    }
    else if(choice == 4)
    {
      gettimeofday(&t1, NULL);
      y = '/';
      n1 = rand() % 100;
      n2 = 1 + rand() % 5;
      n3 = rand() % 100;
      n4 = 1 + rand() % 5;
      n5 = rand() % 100;
      n6 = 1 + rand() % 5;
      n7 = rand() % 100;
      n8 = 1 + rand() % 5;
      n9 = rand() % 100;
      n10 = 1 + rand() % 5;
      n11 = rand() % 100;
      n12 = 1 + rand() % 5;
      n13 = rand() % 100;
      n14 = 1 + rand() % 5;
      n15 = rand() % 100;
      n16 = 1 + rand() % 5;
      n17 = rand() % 100;
      n18 = 1 + rand() % 5;
      n19 = rand() % 100;
      n20 = 1 + rand() % 5;

      r1 = n1 / n2;                                                              // r is for result
      r2 = n3 / n4;
      r3 = n5 / n6;
      r4 = n7 / n8;
      r5 = n9 / n10;
      r6 = n11 / n12;
      r7 = n13 / n14;
      r8 = n15 / n16;
      r9 = n17 / n18;
      r10 = n19 / n20;
    }
    else if (choice == 5)
    {
      int times;
      printf("Times Table:\n");
      printf("Which times table would you like to see? 0-12\n");
      scanf("%d", &times);
      printf("1 x %d = %d\n", times , 1 * times);
      printf("2 x %d = %d\n", times , 2 * times);
      printf("3 x %d = %d\n", times , 3 * times);
      printf("4 x %d = %d\n", times , 4 * times);
      printf("5 x %d = %d\n", times , 5 * times);
      printf("6 x %d = %d\n", times , 6 * times);
      printf("7 x %d = %d\n", times , 7 * times);
      printf("8 x %d = %d\n", times , 8 * times);
      printf("9 x %d = %d\n", times , 9 * times);
      printf("10 x %d = %d\n", times ,10 * times);
      printf("11 x %d = %d\n", times , 11 * times);
      printf("12 x %d = %d\n", times , 12 * times);

      printf("Would you like to choose a new command? y/n\n");
      scanf(" %c", &reply2);


    }
    else
    {
      printf("ERROR!!!\n");
      return 0;
    }
  }
  while(reply2 == 'y' );

    printf("\n1.) %d %c %d = ", n1, y, n2 );
    scanf("%d", &a1 );
    printf("2.) %d %c %d = ", n3, y, n4 );
    scanf("%d", &a2 );
    printf("3.) %d %c %d = ", n5, y, n6 );
    scanf("%d", &a3 );
    printf("4.) %d %c %d = ", n7, y, n8 );
    scanf("%d", &a4 );
    printf("5.) %d %c %d = ", n9, y, n10 );
    scanf("%d", &a5 );
    printf("6.) %d %c %d = ", n11, y, n12 );
    scanf("%d", &a6 );
    printf("7.) %d %c %d = ", n13, y, n14 );
    scanf("%d", &a7 );
    printf("8.) %d %c %d = ", n15, y, n16 );
    scanf("%d", &a8 );
    printf("9.) %d %c %d = ", n17, y, n18 );
    scanf("%d", &a9 );
    printf("10.) %d %c %d = ", n19, y, n20 );
    scanf("%d", &a10 );

    gettimeofday(&t2, NULL);

    if (a1 == r1){total ++;}
    else {}
    if (a2 == r2){total ++;}
    else {}
    if (a3 == r3){total ++;}
    else {}
    if (a4 == r4){total ++;}
    else {}
    if (a5 == r5){total ++;}
    else {}
    if (a6 == r6){total ++;}
    else {}
    if (a7 == r7){total ++;}
    else {}
    if (a8 == r8){total ++;}
    else {}
    if (a9 == r9){total ++;}
    else {}
    if (a10 == r10){total ++;}
    else {}

    printf("\nYou got %d out of 10!\n\n", total);
    elapsedTime = (t2.tv_sec - t1.tv_sec) * 1.0;      // sec to ms
    elapsedTime1 += (t2.tv_usec - t1.tv_usec) / 1.0;   // us to ms
    printf("You took %.1f seconds! Good job!!!\n", elapsedTime); //Added space

    choice = 0; //set these to 0 here to be safe.
    reply = 0;
    reply2 = 0;

    printf("Would you like to play again? y/n\n");
    scanf(" %c", &reply2); //
}
else
{
  return 0;
}}
while(reply2 == 'y' );
return 0;
}
