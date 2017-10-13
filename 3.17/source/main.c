 #include<stdio.h>
 #include<stdlib.h>
int num1,tmp;
float  num2, num3, num4, num5;
int main(void)
{
	
	while (1)
	{
		printf("Enter account number (-1 to end): ");
		scanf_s("%d", &tmp);

		if (tmp == -1) break; else num1 = tmp;

		printf("Enter beginning balance: ");
		scanf_s("%f", &num2);
		printf("Enter total charges: ");
		scanf_s("%f", &num3);
		printf("Enter total credits: ");
		scanf_s("%f", &num4);
		printf("Enter credit limit: ");
		scanf_s("%f", &num5);


	
		if (num2 + num4 > num5)
		{
			printf("Account:\t%d\n", num1);
			printf("Credit limit:\t%.2f\n", num5);
			printf("Balance:\t%.2f\n", num2 + num4);
			printf("Credit Linit Exceeded.\n");
		}
	}
	printf("Program Endded.\n");
	system("pause");
	return 0;
}
