/*WAP to find maximum number among 3 numbers using ternary
operator*/
#include<stdio.h>
main()
{
	int number1,number2,number3,maximum;
	printf("\n\n\t Enter 1st Number :" );
	scanf("%d",&number1);
	printf("\n\n\t Enter 2nd Number :" );
	scanf("%d",&number2);
	printf("\n\n\t Enter 3rd Number :" );
	scanf("%d",&number3);
    maximum = (number1 > number2) ? ((number1 > number3) ? number1 : number3) : ((number2 > number3) ? number2 : number3);
	
	printf("\n\n\t maximum Number : %d ",maximum);
}
