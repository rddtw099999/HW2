#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
	printf("Year\t10.0%%\t10.5%%\t11.0%%\t11.5%%\t12.0%%\t\n\n");
	for (int i = 1; i <= 15; i++){
		printf("%d\t", i);
		for (float j = 10; j <= 12; j += 0.5)
			printf("%.1f\t",5000*pow(1.0+j*0.01,i));
		printf("\n");
		    
	}
	printf("\n");
	system("pause");
	return 0;
}
