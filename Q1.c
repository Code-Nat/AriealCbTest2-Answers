#include <stdio.h>

typedef struct NODE
{
	int num;
	struct NODE* next;
} NODE;

int main()
{
	int x = 6, y = 4, i, j, mat[3][3]={0};

	printf("%d\n", x=x*y>>2^3);	//Math happens first so x*y becomes 24 in binery 11000 then we move it 2 spots right so it becomes 110 then we XOR with 3 that is 11 so it ends up to be 101 that is 5 that is printed then a new line

	if ( x^0x2 > 1)				//First logic so 0x2 is bigger then 1 (0x2 is hex 2 that is 2) then we do XOR with x that is 5 (101) with 1 that ends up to be 100 that is 4 that is true as its not 0
	{
		printf("not right\n");	//not right is printed
	}
	else
	{
		printf("go left\n");
	}

	NODE* head = (NODE*)malloc(sizeof(NODE));	//Create a pointer for type NODE made in mermmory and put it into head
	head -> num = 8;
	NODE* temp = (NODE*)malloc(sizeof(NODE));	//Create a pointer for type NODE made in mermmory and put it into temp
	temp->num = 6;
	head->next = temp;								//Linking head to temp
	NODE* templ = (NODE*)malloc(sizeof(NODE));	//Create a pointer for type NODE made in mermmory and put it into temp1
	templ->num=3;
	temp->next= templ;
	head->next->next = temp;	//Linking temp1 to temp
	i = 4;						//Not relvent
		//So what we got now is head->temp <-> temp1
	mat[head->num%2][head->next->num%2] =3;	//First mat[head->num is 8 with %2 will become 0] second part [head->next (temp) -> num%2 that is 6 so will be 0] so end of this is mat[0][0] = 3
	*((*mat + head->num/4) + 1) = 2;		//mat in first row + head->num (8)/4 = 2 so result is mat[0][2]=2
	*(mat[(head -> next->next->next->next->num)/4] +1) =4;	//mat[head->temp->temp1->temp->temp1->num (3) /4 so that will be 0 +1 end is 1 so the final result on this is that mat[1][0]=4
	for (i = 0; i < 2; i++)
	{
		for (j=0; j<2; j++)
		{
			printf("%d ", mat[i][j] );	//Final print "3 0 2 4 " (without the "") (not sure why honstly should have done "3 0 2 4 0 0 0 0 0 " without the quotes but visual stduio says that is the output
		}
	}
	return 0;
}

/*
Final print:
5
not right
3 0 2 4
*/
