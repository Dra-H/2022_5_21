#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_strlen(char* aa)
{//�����ַ���
	if (*aa != '\0')
	{
		return 1 + my_strlen(aa + 1);
	}
	else
	{
		return 0;
	}
}
char* Reverse_order(char* aa)
{//�����ַ���
	int ret = my_strlen(aa) - 1;//������ַ���
	char sto;//�洢�ַ�����ת��
	sto = aa[0];//��aa�ȱ��浽sto
	aa[0] = aa[ret];//���ַ��������ַ�������һ���ַ�
	aa[ret] = '\0';//��'\0'�����ַ��������ַ�,������ı��ʽ����
	if (my_strlen(aa + 1) > 1)//ÿ�μ����һ���ַ������һ���ַ��м��Ԫ�ظ���
	{
		Reverse_order(aa + 1);//��Ԫ�ص�ַ��һ
	}
	aa[ret] = sto;
	return aa;
}
int main()
{
	char aa[100];
	printf("������==");
	scanf("%s", aa);
	printf("����ǰ==%s\n", aa);
	printf("�����==%s", Reverse_order(aa));
	return 0;
}