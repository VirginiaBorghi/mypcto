//scrivere un programma che, dopo aver preso in input l'anno di nascita dell'utente, scriva se l'utente è nato n anni prima, n anni dopo, o lo stesso anno dello sbarco  dell'uomo sulla luna


#include <stdio.h>

int main()

{
int x;

printf("inserisci un numero ");
scanf("%d", &x);
if(x>1969)
{
    ;
  int  y= x-1969;
 
   printf("sei nato %d anni dopo lo sbarco sulla luna", y);

}
else if (x<1969)
{
    
  int  y=1969-x;

printf("sei nato %d anni prima lo sbarco sulla luna", y);

}
else
{
    printf("sei nato lo stesso anno dello sbarco sulla luna");
}
}



