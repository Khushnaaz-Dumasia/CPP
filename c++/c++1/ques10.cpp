/*
 * ques10.cpp
 *
 *  Created on: 06-Jul-2023
 *      Author: root
 */


#include<iostream>
using namespace std;
#define size 5
int main()
{
	int r=0,rev=0;
	int n;
	cout<<"\nEnter the number: ";
	cin>>n;

	while(n>0)
	{
		r=n%10;
		n=n/10;
		rev=rev*10+r;
	}
	cout<<"\nThe reversed number is: "<<rev;
	return 0;
}
