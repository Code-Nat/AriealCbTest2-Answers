#pragma once

void putValues(int mat[][MAX_SIZE], int val, int size, int rowIndex, int colIndex)
{
	int i, j;
	for (i = rowIndex;  i < MAX_SIZE && (i < size+rowIndex); i++)
		for (j = colIndex; (j < MAX_SIZE) && (j < (size+colIndex)); j++)
		{
			mat[i][j] = val;
		}
	printMat(mat);
}
