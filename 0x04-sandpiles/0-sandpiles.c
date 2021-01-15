#include <stdlib.h>
#include <stdio.h>
#include "sandpiles.h"

static void print_grid(int grid[3][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (j)
				printf(" ");
			printf("%d", grid[i][j]);
		}
		printf("\n");
	}
}

void centro(int grid[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if ((j == 0 || j == 2) && (i == 0 || i == 2))
				continue;
			else if (j == 1 && i == 1)
				grid[i][j] -= 4;
			else
				grid[i][j] += 1;
		}
	}
}

void cruz(int grid[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if ((j == 0 || j == 2) && (i == 0 || i == 2))
				grid[i][j] += 2;
			else if (j == 1 && i == 1)
				grid[i][j] += 4;
			else
				grid[i][j] -= 4;
		}
	}
}

void esquinas(int grid[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if ((j == 0 || j == 2) && (i == 0 || i == 2))
				grid[i][j] -= 4;
			else if (j == 1 && i == 1)
				continue;
			else
				grid[i][j] += 2;
		}
	}
}
/**
 * sandpiles_sum - Print 3x3 grids sum
 * @grid1: Left 3x3 grid
 * @grid2: Right 3x3 grid
 *
 */
void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	int contador = 0, aux = 2;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			grid1[i][j] += grid2[i][j];
		}
	}
	while (contador < 2)
	{
		if (aux == 2)
			printf("=\n"), print_grid(grid1), aux = 0;
		if (grid1[0][0] > 3 && (grid1[0][0] >= grid1[0][1] && grid1[0][0] >= grid1[1][1]))
			contador = 0, esquinas(grid1);
		else if (grid1[0][1] > 3 && (grid1[0][1] >= grid1[0][0] && grid1[0][1] >= grid1[1][1]))
			contador = 0, cruz(grid1);
		else if (grid1[1][1] > 3 && (grid1[1][1] >= grid1[0][1] && grid1[1][1] >= grid1[0][0]))
			contador = 0, centro(grid1);
		contador++;
		aux++;
		if (grid1[0][0] <= 3 && grid1[0][1] <= 3 && grid1[1][1] <= 3)
			break;
	}
}
