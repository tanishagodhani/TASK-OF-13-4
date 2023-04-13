#include<stdio.h>

main()

{
	float c,f;
	
	printf("Enter Temperature In Celsius :");
	scanf("%f",&c);
	
	f=c*9/5+32;
	printf("Value of Fahrenheit = %.2f",f);
}
