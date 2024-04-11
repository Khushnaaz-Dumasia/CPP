/*
 * ques3.cpp
 *
 *  Created on: 30-Jun-2023
 *      Author: root
 */

#include<iostream>
using namespace std;
class calculate
{
public:
	int n, m, result;

	int quotient()
	{
		result=n/m;
		return result;
	}

	int remainder()
	{
		result=n%m;
		return result;
	}
};
int main()
{
	calculate cal;
	cout<<"Enter two numbers: ";
	cin>>cal.n>>cal.m;

	cout<<"\nThe quotient is: "<<cal.quotient();
	cout<<"\nThe remainder is: "<<cal.remainder();
	return 0;
}

