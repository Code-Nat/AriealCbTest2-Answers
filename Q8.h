void sum(int arr[][M])
{
	int sum = 0;

	for (int i = 0; i <= M; i++)
		for (int j = 0; j <= M; j++)
			if (j >= i && j < M - i)
				sum += arr[i][j];
	return sum;
}

//Sum will return nothing as the function is void, but as this is likely a mestike lets move on
//Sum will return 225 as it takes the first row, then the second row without each side, then in the third row it takes only the 2 center elements and sum it all up to 225, after its done that it will return sum
