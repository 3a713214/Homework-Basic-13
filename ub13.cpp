#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char sex;
	int age;

	printf("請輸入性別\n是男生請輸入B,女生請輸入G:\n");
	scanf("%c",&sex);
	printf("請輸入年齡:\n");
	scanf("%d",&age);
	
	
	if(sex=='B'||sex=='b')
	{ 
		if(age>=18)
			printf("可結婚\n");
		else
			printf("不可結婚\n");
	} 
	else if(sex=='G'||sex=='g')
	{
		if(age>=16)
			printf("可結婚\n");
		else
			printf("不可結婚\n");
	}
	
	system("pause");
	return 0;
}

