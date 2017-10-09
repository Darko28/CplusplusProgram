#include <stdio.h>

#define ROW 5
#define COL 4

int main()
{
	int a[ROW][COL];

	for (int i = 0; i < ROW; i++)
	{
			for (int j = 0; j < COL; j++)
				printf("%d ", a[i][j]);
			printf("\n");
	}
}
