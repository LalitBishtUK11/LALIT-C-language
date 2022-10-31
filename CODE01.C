#include<stdio.h>
#include<conio.h>
void main()
{
float f;
float c;
printf("Enter fahrenheit");
scanf("%f",&f);
c=(f-32)*5/9;
printf("temperature in celcius is %f",c);
getch();
}
