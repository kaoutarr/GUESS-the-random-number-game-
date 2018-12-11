#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int level ()
{

  int choix=0;

    while (choix<1 || choix >3) {

      printf("==> Choose your level :\n" );
      printf("        1: Between 0 and 100\n" );
      printf("        2: Between 0 and 1000\n" );
      printf("        3: Between 0 and 10000\n" );
      scanf("%d",&choix );
    }

  return choix;
}


int main (int argc, char *argv[])
{
  int continuerPartie =0;
  if (continuerPartie = 1)

   {

  int MAX=0,  MIN=0, nr=0 , n=0 ;


  switch (level()) {
    case 1:
      MAX = 100 ;
      printf(" *YOU CHOOSE LEVEL 1 \n\n\n HERE WE GO\n\n\n " );
      break;
    case 2 :
      MAX=1000;
      printf(" *YOU CHOOSE LEVEL 2 \n\n\n HERE WE GO\n\n\n" );
      break;
     case 3:
     MAX =10000;
     printf(" *YOU CHOOSE LEVEL 3 \n\n\n HERE WE GO\n\n\n" );
     break;
  }

  srand(time(NULL));
  nr = (rand() % (MAX - MIN + 1)) + MIN;

   int compteur =0;

    while( n!=nr)
  {
      compteur++;
        printf("write your number here :");
        scanf("%d",&n);


        if (n > nr){
        printf( "your number is higher  \n");
    }

    else if (n < nr){
         printf( "your number is lower  \n");
    }
    else if (n == nr){
         printf( "\n ************* YOU WIN  ***************  \n  after %d try \n\n\n",compteur);
         printf("  Do you want to play it again ? \n\n *if yes tap 1 \n *if no press any key\n \n" );
         scanf("%d",&continuerPartie );
    }

  }

}
     return 0 ;


}
