#ifndef _SLIDE_LINE_
#define _SLIDE_LINE_

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#define SLIDE_LEFT 0
#define SLIDE_RIGHT 1
int slide_line(int *line, size_t size, int direction);
#endif