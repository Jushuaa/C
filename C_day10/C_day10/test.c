#include"game.h"
void menu()
{
	printf("***** <三子棋游戏>*****\n");
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
		printf("玩家走：\n");
		palyer_move(board, ROW, COL);
		print_board(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != ' ')
			break;
		printf("电脑走：\n");
		computer_move(board, ROW, COL);
		print_board(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != ' ')
			break;
	}
	if (ret == '#')
	{
		printf("恭喜你赢了！\n");
	}
	else if (ret == '*')
	{
		printf("很遗憾，你输了\n");
	}
	else if (ret == 'Q')
	{
		printf("平局\n");
	}
}
int main()
{
	int input = 0;
	srand((uint)time(NULL));
	do
	{
		menu();
		printf("请输入选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			break;
		case 3:
			printf("选择错误，请重新选择：");
			break;
		}
	} while (input);

	return 0;
}