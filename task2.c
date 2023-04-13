#include<stdio.h>

main()

{
	int a,b;
	 printf("Enter value A=");
	 scanf("%d",&a);
	
	
	printf("Enter value B=");
	scanf("%d",&b);
	
a=a+b;
b=a-b;
a=a-b;

printf("swapping value of A=%d & B=%d",a,b);

}
