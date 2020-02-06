//Given base = 7

void print(int base)
{
	int i, j, k;

	for (i = 1; i <= base; i++)				//Take care of rows (\n in the end hints to that)
	{
		for (k = 0; k < base; k++)			//take care for each row to the amount of areas
		{
			for (j = 1; j <= i; j++)		//take care of printing the * prints by the number of the row
				printf("*");
			for (; j <= base; j++)			//print spaces that fill up the space left by the * to the size of base
				printf(" ");
			printf(" ");
		}
		printf("\n");
	}
}

/* End result
*        *        *        *        *        *        * 
**       **       **       **       **       **       **     
***      ***      ***      ***      ***      ***      ***     
****     ****     ****     ****     ****     ****     ****
*****    *****    *****    *****    *****    *****    *****  
*******  *******  *******  *******  *******  *******  *******  
******** ******** ******** ******** ******** ******** ******** 

*/
