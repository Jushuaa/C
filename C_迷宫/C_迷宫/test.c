#include"maze.h"
#include"Stack.h"
void TestMaze()
{
	Pos entry,exit;
	entry._row = 5;
	entry._col = 2;
	
	exit._row = 4;
	exit._col = 5;
	MazePrint();
	printf("�Ƿ��г��ڣ�%d\n", GetMazePath(entry, exit));
	printf("���·����%d\n", pathsize);
	MazePrint();
}
int main()
{	
	TestMaze();
	system("pause");
	return 0;
}