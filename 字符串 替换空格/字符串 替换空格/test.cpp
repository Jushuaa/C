#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
void ReplaceBlank(string &str,int len)
{
	if (len < 0)
		return;
	int blankcount = 0;
	for (int i = 0; i < len; ++i)
	{
		if (str[i] == ' ')
		{
			++blankcount;//ͳ���ַ��пո����
		}	
	}
	int newlength = len + blankcount * 2;//�����ַ����еĳ���
	if (newlength == len)
		return;
	int oldIndex = len - 1;//ָ��ԭʼ�ַ�����β
	int newIndex = newlength - 1;//ָ���µ��ַ�����β
	str.resize(newlength);//���ַ���������һ���������µĴ�С 
	while (oldIndex>=0 && newIndex > oldIndex)
	{
		if (str[oldIndex] == ' ')
		{
			str[newIndex--] = '0';
			str[newIndex--] = '2';
			str[newIndex--] = '%';
		}
		else
		{
			str[newIndex--] = str[oldIndex];
		}
		--oldIndex;
	}
}
int main()
{
	string  str = "hello world";
	int len = str.size();
	ReplaceBlank(str, len);
	cout << str << endl;
	system("pause");
	return 0;
}




