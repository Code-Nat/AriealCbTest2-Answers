/*
input
left:  [1][3][1][6][3]
right: [2][5][5][2][4]

size = 5
*/

int find(Domino dominos[], int size)  //Functions find the biggest sum of right and left in this exsample it will return 8
{
	int maxSum = 0, i;
	for (i = 0; i < size; i++)
	{
		int sum = dominos[i].left + dominos[i].right;
		if (sum > maxSum)
			maxSum = sum;
	}
	return maxSum;
}

int dMDV(Domino dominos[], int size)    //function removes the parts where sum of right+left is equal to maxSum
{
	int maxSum = find(dominos, size);   //put the max of right+left into maxSum (this case its 8)
	int i;
	int newSize = size;
	for (i = 0; i < newSize; i++)       
	{
		if (dominos[i].left + dominos[i].right == maxSum)   //if left and right sum is equal to maxSum do
		{
			dominos[i] = dominos[newSize - 1];  //Take the last part of the array, and put it where the max size was found
			i--;
			newSize--;
		}
	}
	return newSize;   //return 3
}

/*
How the code runs:
It first gets the maxSum of the Domino struct

Loop:
the loop pass on each of the elements of the array of the struct type Domino and cheak if its sum value is maxSum if so it will take the last cell of the array and place it over the current location, then "resizing" the array by changing the value of newSize that it will only loop till there, it will contine doing that
in this case it will: 
1. overright dominos[1] (left: 3, right: 5) with dominos[4] (left: 3,right:4), and change newSize to 4
2. overright dominos[3] (left: 6, right: 2) with dominos[3] (it self) and change the value of newSize to 3
3. cheak one last time on dominos[2] where it will not find maxSum
exit loop and return 3

*/
