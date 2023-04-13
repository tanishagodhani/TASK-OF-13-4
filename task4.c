#include<stdio.h>

main()

{
	float bs,hra,da,ta,gs;
	
	printf("Enter value of Base salary =");
	scanf("%f",&bs);
	
	printf("Enter value of HRA =");
	scanf("%f",&hra);
	
	printf("Enter value of DA =");
	scanf("%f",&da);
	
	printf("Enter value of TA =");
	scanf("%f",&ta);
	
	hra=hra*bs/100;
	da=da*bs/100;
	ta=ta*bs/100;
	
	gs=hra+da+ta+bs;
	
	printf("Value of GS = %.2f",gs);
}
