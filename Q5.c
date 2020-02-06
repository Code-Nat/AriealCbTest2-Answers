#include <stdio.h>

int func(int arr[], int l, int r, int x)
{
	if (r >= l)		//Cheak we have more things to test if l become bigger then r we have went too far and there is no x number in the array
	{
		int m = l + (r - l) / 2;	//Gives us the middle of the current location

		if (arr[m] == x) return m;	//if we found x return its location

		if (arr[m] > x) return func(arr, l, m - 1, x);	//if x is smaller then the number at the current location (middle) then go down 1 step

		return func(arr, m + 1, r, x);					//if x is NOT smaller then the number at the current location (as last test failed) then go up 1 step
	}
	return -1;		//return fail
}

int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int n = sizeof(arr) / sizeof(arr[0]);		//sizeof(arr) = the size of the bytes the array takes so 5*sizeof (int)		sizeof (arr[0]) gives us the size of the first element, so in this case a size of int, we then do sizeof the entire array devided by the size of the each element to get the amount of items in the array that is 5
	int x = 10;									//X will be the number we are looking for
	int result = func(arr, 0, n - 1, x);		//Call the function and return the result (location or -1 for failed) to result
	(result == -1) ? printf(" no") : printf("yes %d", result);	//if failed print " no" (without "") if it found the number print yes then location so in this case "yes 3"
	return 0;
}

//B. the function finds if the number X shows in the array between l and r, if it dose not return -1 if it dose return the location
