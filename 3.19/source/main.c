#include<stdio.h>
#include<stdlib.h>
float  num1,num2,num3, tmp;

int main(void)
{
	while (1)
	{
		printf("Enter loan principal (-1 to end):");
		scanf("%f", &tmp);
		if (tmp == EOF)
			break;
		else
			num1 = tmp;
		printf("Enter intetest rate:");
		scanf("%f", &num2);
		printf("Enter term of the loan in days:");
		scanf("%f", &num3);

		printf("The interest charge is: $%.2lf\n\n", (num1*num2*num3)/365);
	}
	printf("Program Endded.\n");
	system("pause");
	return 0;
}
