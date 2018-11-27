#include"game.h"
void menu()
{
	printf("***** <��������Ϸ>*****\n");
	printf("*************************\n");
	printf("******   1.play   *******\n");
	printf("******   0.exit   *******\n");
	printf("*************************\n");
	printf("*************************\n");
}
void game()
{
	char ret;
	char board[ROW][COL];
	init_board(board, ROW, COL);
	print_board(board, ROW, COL);
	while (1)
	{
		printf("����ߣ�\n");
		palyer_move(board, ROW, COL);
		print_board(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != ' ')
			break;
		printf("�����ߣ�\n");
		computer_move(board, ROW, COL);
		print_board(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != ' ')
			break;
	}
	if (ret == '#')
	{
		printf("��ϲ��Ӯ�ˣ�\n");
	}
	else if (ret == '*')
	{
		printf("���ź���������\n");
	}
	else if (ret == 'Q')
	{
		printf("ƽ��\n");
	}
}
int main()
{
	int input = 0;
	srand((uint)time(NULL));
	do
	{
		menu();
		printf("������ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			break;
		case 3:
			printf("ѡ�����������ѡ��");
			break;
		}
	} while (input);

	return 0;
}