/*
 * ques12.cpp
 *
 *  Created on: 06-Jul-2023
 *      Author: root
 */


#include<iostream>
using namespace std;
#define size 5
int main()
{
	int a[size];
	int sum=0, avg=0;

	for(int i=0;i<size;i++)
	{
		cout<<"\nEnter the array elements: ";
		cin>>a[i];
	}

	for(int i=0;i<size;i++)
	{
		sum=sum+a[i];
	}
	cout<<"\nSum of elements:"<<sum;
	avg=sum/size;
	cout<<"\nThe average of array elements is: "<<avg;
	return 0;
}

