#include<stdio.h>
int Find(int *arr, int ROW, int COL, int data)
{
	int row = 0;//������Ϊ0
	int col = COL - 1;//��Ϊ3
	if ((arr != NULL) && (ROW>0&&COL>0))//�ж��Ƿ�Ϊ������
	{
		while (row<ROW&&col >= 0)//ֱ���ų���
		{
			if (arr[row*col + col] == data)//���Ͻ�Ϊ���ҵ�����
			{
				return 1;
			}
			else if (arr[col*row + col]>data)//���ϽǴ���data��Ҫ�޳����һ��
			{
				--col;
			}
			else{
				row++;//���Ͻ�С��data�������ƶ�һ��
			}
		}		
	}
	return 0;
}
int main()
{
	int arr[] = { 1,2,9,10,3,4,11,12,5,7,13,14,6,9,15,16};
	int data = 0;
	int ROW = 3;
	int COL = 3;
	printf("��������Ҫ���ҵ����֣�");
	scanf_s("&data");
	int ret=Find(arr, ROW, COL, data);
	if (ret == 1)
	{
		printf("�ҵ���\n");
	}
	else if (ret==0)
	{
		printf("�Ҳ���\n");
	}
	system("pause");
	return 0;
}

