#include <stdio.h>

int main()
{
    int x;
    int y = 1;

printf("inserisci un numero ");
scanf("%d", &x);

while(x>1)
{
   y= x*y; 
   x= (x-1);
}
printf("il fattoriale è %d", y ); 

}
