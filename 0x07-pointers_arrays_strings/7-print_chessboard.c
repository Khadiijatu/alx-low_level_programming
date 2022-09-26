#include "main.c"

/**
 * print_chessboard - Prints the chessboard
 * @a: char pointer
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}

/**
 * main - check the code
 *
 * Return: 0
 */

int main(void)
{
	int i, j;
	char board[8][8];

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8 ; j++)
		{
			if ((i + j) % 2 == 0)
				board[i][j] = 219;
			else
				board[i][j] = 255;
		}
	}
	print_chessboard(board);
	return (0);
}
