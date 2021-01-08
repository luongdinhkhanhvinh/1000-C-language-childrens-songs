//
//  main.cpp
//  Learning
//
//  Created by Vinh Luong on 1/9/21.

// Bài 10: Tính T(x, n) = x^n
//
#include<stdio.h>


double Power_n(double x, long n)
{
	// n >= 0
	double result = 1;
	while(n--)
	{
		result = result * x;
	}
	return result;
}
double qPower_n(double x, long n)
{
	// n >= 0
	double result = 1;
	while(n)
	{
		if(n % 2 == 1)
		{
			result = result * x;
		}
		x = x * x;
		n = n / 2;
	}
	return result;
}
int main()
{
	double x = 3;
	long n = 2;
	double z;
	z = qPower_n(x, n);
    cout<<"Ket qua se la:"<<z <<endl;
	return 0;
}