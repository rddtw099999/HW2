 #include<stdio.h>
 #include<stdlib.h>
int main(void)
{
	for (int i = 1; i <= 500; i++){
		for (int j = 1; j <= 500; j++){
			for (int k = 1; k <= 500; k++){
				if ((i*i + j*j) == k*k)
				{
					printf("%d\t%d\t%d\t������T����\n", i, j, k);
				}
			}
		}
	}

	system("pause");
	return 0;
}
