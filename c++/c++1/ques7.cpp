/*
 * ques7.cpp
 *
 *  Created on: 05-Jul-2023
 *      Author: root
 */


#include<iostream>
using namespace std;

int main()
{
	int n, fact=1,i;

	cout<<"\nEnter an integer: ";
	cin>>n;
	if(n<=10)
	{
		for(i=1;i<=n;i++)
		{
			fact=fact*i;
		}
		cout<<"\nThe factorial is: "<<fact;
	}
	else
	{
		cout<<"\nEnter number from 1 to 10";
	}

	return 0;
}

