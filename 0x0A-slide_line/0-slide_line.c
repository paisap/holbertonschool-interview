#include "slide_line.h"


/**
* slide_line - Add new node
* @line: Pointer to the node to print
* @size: Offset to print
* @direction: sides
*
* Return: length of printed tree after process
*/
int slide_line(int *line, size_t size, int direction)
{
	int i, j, sizei = size;

	if (direction == 0)
	{
		for (i = 0; i < sizei; i++)
			if (line[i] != 0)
				for (j = i + 1; j < sizei; j++)
					line[i] == line[j] ? line[i] += line[j], line[j] = 0, j = sizei : 0;
		for (i = 0; i < sizei; i++)
			if (line[i] == 0)
				for (j = i + 1; j < sizei; j++)
					line[j] != 0 ? line[i] = line[j], line[j] = 0, j = sizei : 0;
	}
	else
	{
		for (i = sizei - 1; i >= 0; i--)
			if (line[i] != 0)
				for (j = i - 1; j >= 0; j--)
					line[i] == line[j] ? line[i] += line[j], line[j] = 0, j = -1 : 0;
		for (i = sizei - 1; i >= 0; i--)
			if (line[i] == 0)
				for (j = i - 1; j >= 0; j--)
					line[j] != 0 ? line[i] = line[j], line[j] = 0, j = -1 : 0;
	}
	return (1);
}
