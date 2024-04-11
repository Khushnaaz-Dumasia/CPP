/*
 * ques13.cpp
 *
 *  Created on: 10-Jul-2023
 *      Author: root
 */



#include<iostream>
using namespace std;
#define size 5
int main()
{
	int a[size],i=0,temp=0;

	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the array elements: ";
		cin>>a[i];
	}

	cout<<"\nThe first value is: "<<a[0];
	cout<<"\nThe last value is: "<<a[size-1];

	temp=a[0];
	a[0]=a[size-1];
	a[size-1]=temp;

	cout<<"\nThe swapped first value is: "<<a[0];
	cout<<"\nThe swapped last value is: "<<a[size-1];
	return 0;
}

