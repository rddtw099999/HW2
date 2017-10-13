 #include<stdio.h>
 #include<stdlib.h>
int main(void)
{
	printf("\n(A)\n");
	for (int i = 1; i <= 10; i++){

		for (int j = 1; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}

	printf("\n(B)\n");
	for (int i = 1; i <= 10; i++){

		for (int j = 10; j >= i; j--){
			printf("*");
		}
		printf("\n");
	}

	printf("\n(C)\n");
	for (int i = 1; i <= 10; i++){
		for (int k = 1; k < i; k++){
			printf(" ");
		}
		for (int j = 10; j >= i; j--){
			
			printf("*");
		}
		printf("\n");
	}

	printf("\n(D)\n");
	for (int i = 1; i <= 10; i++){
		for (int j = 10; j > i; j--){
			printf(" ");
		}
		for (int j = 1; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}
