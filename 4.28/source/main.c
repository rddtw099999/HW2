 #include<stdio.h>
 #include<stdlib.h>
int num1,num2,num3,num4,num5,num6,num7;
int main(void)
{
	printf("�п�J�A���~��N�X:");
    scanf("%d", &num1);
	switch (num1){
	case 1:
		printf("�п�J�A���g�~:");
		scanf("%d", &num2);
		printf("\n�A��¾�~�O:�g�z�A�g�~�O:%d", num2);
		break;
	case 2:
		printf("�п�J�A����g�u�@�ɼ�:");
		scanf("%d", &num3);
		printf("�п�J�A�����~:");
		scanf("%d", &num4);
		if (num3 > 40) num3 = (40 * num3) + (num3 - 40)*1.5*num4; else num3 = num3 * num4;
		printf("\n�A��¾�~�O:���~�u�A�g�~�O:%d",num3);
		break;
	case 3:
		printf("�п�J�A����g�P����B:");
		scanf("%d", &num5);
		printf("\n�A��¾�~�O:��Ī��u�A�g�~�O:%.2f", (float)250+(num5*0.057));
		break;
	case 4:
		printf("�п�J�A��g���u�@���:");
		scanf("%d", &num6);
		printf("�п�J�C�u�@��ƪ����S:");
		scanf("%d", &num7);
		printf("\n�A��¾�~�O:�s�u�A�g�~�O:%d", num6*num7);
		break;
	default:
		printf("�S�o��¾�~��");
		break;
	}
	printf("\n\n");
	system("pause");
	return 0;
}
