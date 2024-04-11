/*
 * ques1.cpp
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
	int i;
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the array elements: ";
		cin>>a[i];
	}

	cout<<"\nThe reversed array is:"<<endl;
	for(i=size-1;i>=0;i--)
	{
		cout<<a[i];
	}
	return 0;
}



