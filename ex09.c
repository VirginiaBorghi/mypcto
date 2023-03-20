// ilprogramma letti tre numeri, determini se possono essere considerati in progressione aritmetica; una progressione aritmetica è una serie di numeri in cui la differenza tra due numeri succesivi è costante.
#include <stdio.h>

float main()
{
float x;
float y;
float z;
printf("inserisci un numero ");
scanf("%f", &x);
printf("inserisci un numero ");
scanf("%f", &y);
printf("inserisci un numero ");
scanf("%f", &z);

if (x-y==y-z)
{
printf( "i numeri sono in progressione aritmetica" );
}

else
{
printf("i numeri non sono in progressione aritmetica");
}

}