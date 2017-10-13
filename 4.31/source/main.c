#include<stdio.h>
#include<stdlib.h>
int max=9;
int main(void)
{
	for (int i = 1; i <= max; i += 2){
		for (int j = 1; j <= max; j++){
			if ((j <=((max+1)-i)/2) || j>=(max+1)-((max-i)/2))
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}

	for (int i = max-2; i >= 0; i -= 2){
		for (int j = 1; j <= max; j++){
		if ((j <= ((max + 1) - i) / 2) || j >= (max + 1) - ((max - i) / 2))
				printf(" ");
		else
				printf("*");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}
