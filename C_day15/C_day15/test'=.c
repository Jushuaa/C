//#include<stdio.h>
//#include<stdarg.h>
//int average(int n, ...)
//{
//	va_list arg;
//	int i = 0;
//	int sum = 0;
//	va_start(arg, n);//��ʼ��argΪδ֪�����б�ĵ�һ�������ĵ�ַ
//	for (i = 0; i < n; i++)
//	{
//		sum += va_arg(arg, int);
//	}
//	return sum / n;
//	va_end(arg);
//}
//int max(int n, ...)
//{
//	va_list arg;
//	int i = 0;
//	int max = 0;
//	va_start(arg, n);
//	for (i = 0; i < n; i++)
//	{
//		int val = va_arg(arg, int);
//		if (val>max)
//		{
//			max = val;
//		}
//	}
//	va_end(arg);
//	return max;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int avg1 = average(2, a, c);
//	int avg2 = average(3, a,b, c);
//	int max1 = max(2, a, c);
//	int max2 = max(3, a, b, c);
//	printf("avg1=%d\n", avg1);
//	printf("avg2=%d\n", avg2);
//	printf("max1=%d\n", max1);
//	printf("max2=%d\n", max2);
//	return 0;
//}
#include<stdio.h>
#include<stdarg.h>
#include<string.h>
void print_int(int n)//�ݹ��ӡ��ע�������(args,int)��int�����Σ�����ȫ��charcharchar

{
	if (n > 9)
	{
		print_int(n / 10);
	}
	putchar(n %10+'0');
}
void my_printf(const char *format, ...)
{
	va_list arg;
	va_start(arg, format);
	while(*format)
	{
		switch (*format)
		{
		case 's':
		{
					char *str = va_arg(arg, char*);//��Ϊ���ַ���������Ҫ��char*������
					while (*str)
					{
						putchar(*str);
						str++;
					}
		}
			break;
		case 'c':
		{
					char ch = va_arg(arg, char);//�����ַ���ӡ
					putchar(ch);
		}
			break;
		case 'd':
		{
					int ret = va_arg(arg, int);
					printf_int(ret);
		}
			break;
		defult:
			putchar(*format);
			break;
		}
		format++;
	}
}
int main()
{
	my_printf("s ccc.\n", "hello", 'b', 'i', 't');
	system("pause");
	return 0;
}