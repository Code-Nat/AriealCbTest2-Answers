#pragma once

int compereThree(int num, int comp1, int comp2)
{
	if (!(num/10))  //if next number is 0 we are done as there are no 2 numbers to compere and if it got to here its true
		return 1;
	if ((num % 10 + (num / 10) % 10) != comp1)    //Cheak if sum works with comp1
		if ((num % 10 + (num / 10) % 10) != comp2)  //Cheak if sum works with comp2
			return 0;                                 //Both failed return false
	compereThree(num / 10, comp1, comp2);         //Still good, go for the next digit in the number
}	
