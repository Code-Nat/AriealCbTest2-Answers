#pragma once

int digitCount(int num) //function to count amount of digits in a number
{
	if (!num)
		return 0;
	return 1 + digitCount(num / 10);
}

int powerOfTen(int num) //function to do power of 10 on 10 the amount of times set by the num
{
	if (num==1)
		return 1;
	return 10*powerOfTen(num - 1);
}

int reverse(int num)  //function to reverse
{
	if (num<10)
		return num;
	return powerOfTen(digitCount(num))*(num%10)+reverse(num / 10);  //take the amount of digits in the number power 10 by that, then Multiply that by the single digit we got to move it to its location in the number  
}

//For exsample run with 123
//first 3*(10^2) + 
//second 2*(10^1) +
// third 1

//so that will be 300 + 20 + 1 = 321
