#include<stdio.h>
#include<stdlib.h>
float  num1, tmp;

int main(void)
{
	 while(1)
	 {
		printf("\nEnter sales in dollars (-1 to end):");
		scanf("%f", &tmp);
		if (tmp ==EOF )
			break; 
		else 
			num1 = tmp;

		num1 = 200 + num1*0.09;
		printf("Salary is: $%.2lf\n ", num1);
	}
	printf("Program Endded.\n");
	system("pause");
	return 0;
}
