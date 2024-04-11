/*
 * ques15.cpp
 *
 *  Created on: 10-Jul-2023
 *      Author: root
 */

#include<iostream>
using namespace std;
#define size 5
int main()
{
	int a[size],min=0,max=0,i=0;

	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the array elements: ";
		cin>>a[i];
	}

	max=a[0];
	min=a[0];
	for(i=0;i<size;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
		if(min>a[i])
		{
			min=a[i];
		}
	}
	cout<<"\nThe largest value is: "<<max;
	cout<<"\nThe smallest value is: "<<min;
	return 0;

}


