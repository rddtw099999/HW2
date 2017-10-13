#include<stdio.h>
#include<stdlib.h>
float  num1,num2, tmp,val;

int main(void)
{
	while (1)
	{
		printf("Enter # hours worked (-1 to end):");
		scanf("%f", &tmp);
		if (tmp == EOF)
			break;
		else
			num1 = tmp;
		printf("Enter hourly rate of the worker ($00.00):");
		scanf("%f", &num2);
		if (num1 > 40){
			val = ((num1 - 40)*num2*1.5) + (40 * num2);
		}
		else
		{
			val = num1*num2;
		}
		printf("Salary is: $%.2lf\n\n", val);
	}
	printf("Program Endded.\n");
	system("pause");
	return 0;
}
