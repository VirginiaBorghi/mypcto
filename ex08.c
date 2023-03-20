#include <stdio.h>

int main()
{
float x;
float y;
float z;
printf("inserisci una temperatura in celsius ");
scanf("%f", &x);
y= (9/5)*x + 32;
z= x + 273.15;
printf("%f %f", y,z);
if (x<-273.15)
{


printf( "error" );



}

else
{

y= (9/5)*x + 32;
z= x + 273.15;
printf("%f %f", y,z);

}



}
