 #include<stdio.h>
 #include<stdlib.h>
int a, b;
int main(void)
{
	printf("½Ð¿é¤Jªø¡B¼e (¨Ò:3 4):");
	scanf("%d%d", &a, &b);
	printf("\n");
	for (int j=1; j <= b; j++){
		if (j == 1 || j == b){
			for (int i = 0; i < a; i++)
			printf("*");
			printf("\n");
		}
		else
		{
			for (int i = 1; i <= a ; i++)
			{
				if (i == 1 || i == a )
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}
     }
	printf("\n");
	system("pause");
	return 0;
}
