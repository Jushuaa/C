//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main(int argc,char *argv[])
//{
//	int sum = 0;
//	int num1 = atoi(argv[2]);
//	int num2 = atoi(argv[3]);
//	if (argv[1][0] == '-')
//	{
//		switch (argv[1][1])
//		{
//		case 'a':
//			sum = num1 + num2;
//			break;
//		case 's':
//			sum = num1*num2;
//			break;
//		case'm':
//			sum = num1*num2;
//			break;
//		case 'd':
//			sum = num1 / num2;
//			break;
//		default:
//			printf("�ڶ�����������\n");
//			break;
//		}
//	}
//	else
//	{
//		printf("�������\n");
//	}
//	printf("sum=%d\n", sum);
//	system("pause");
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define S 3 //����
#define N 10//����
void exchange(char *p,char *q)
{
	char tmp = *p;
	*p = *q;
	*q = tmp;
}
void sort(char arr[S][N])
{
	int x = 0;
	while (x < 5)
	{
		int i = 0;
		int j = 0;
		int y = strlen(arr[x]);
		for (i = 0; i < y-1; i++)
		{
			for (j = 0; j < y - i - 1; j++)
			{
				if (arr[x][j]>arr[x][j + 1])
				{
					exchange(&arr[x][j], &arr[x][j + 1]);
				}
			}
		}
		x++;//��һ��
	}
}
int main()
{
	char arr[S][N] = { "asddfg", "WERTDFG", "DRFCFGHJ" };
	int i = 0;
	sort(arr);
	for (i = 0; i < S; i++)
	{
		printf("%s\n", arr[i]);
	}
	system("pause");
	return 0;
}