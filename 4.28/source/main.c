 #include<stdio.h>
 #include<stdlib.h>
int num1,num2,num3,num4,num5,num6,num7;
int main(void)
{
	printf("請輸入你的薪資代碼:");
    scanf("%d", &num1);
	switch (num1){
	case 1:
		printf("請輸入你的週薪:");
		scanf("%d", &num2);
		printf("\n你的職業是:經理，週薪是:%d", num2);
		break;
	case 2:
		printf("請輸入你的當週工作時數:");
		scanf("%d", &num3);
		printf("請輸入你的時薪:");
		scanf("%d", &num4);
		if (num3 > 40) num3 = (40 * num3) + (num3 - 40)*1.5*num4; else num3 = num3 * num4;
		printf("\n你的職業是:時薪工，週薪是:%d",num3);
		break;
	case 3:
		printf("請輸入你的當週銷售金額:");
		scanf("%d", &num5);
		printf("\n你的職業是:抽傭金工，週薪是:%.2f", (float)250+(num5*0.057));
		break;
	case 4:
		printf("請輸入你當週的工作件數:");
		scanf("%d", &num6);
		printf("請輸入每工作件數的報酬:");
		scanf("%d", &num7);
		printf("\n你的職業是:零工，週薪是:%d", num6*num7);
		break;
	default:
		printf("沒這項職業ㄛ");
		break;
	}
	printf("\n\n");
	system("pause");
	return 0;
}
