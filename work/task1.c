#include <stdio.h>
#include <string.h>
#include <math.h>
#include "task1.h"

void drawFractal(char (*arr)[N], int x, int y, int size)
{
	if (size == 0)
	{
		arr[y][x] = '*';
	}
	else
	{
		int shift = (int)pow(3.0, (double)(size - 1));
		drawFractal(arr, x, y, size - 1);
		drawFractal(arr, x, y + shift, size - 1);
		drawFractal(arr, x, y - shift, size - 1);
		drawFractal(arr, x + shift, y, size - 1);
		drawFractal(arr, x - shift, y, size - 1);
	}
}

void printMatrix(char (*arr)[N])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			putchar(arr[i][j]);
		if (i != (N - 1))
			putchar('\n');
	}
}