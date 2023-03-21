#include <stdio.h>

int main()
{  
int x;
int y;
int z;
printf("inserisci un numero ");
scanf("%d", &x);
printf("inserisci un numero ");
scanf("%d", &y);
printf("inserisci un numero ");
scanf("%d", &z);
if (x+y>z && x+z>y&& z+y>x)
{
printf( "i lati fanno parte di un triangolo" );
}

else
{
printf( "i lati non fanno parte di un triangolo" );

}
}