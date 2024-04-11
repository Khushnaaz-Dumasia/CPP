/*
 * ques16.cpp
 *
 *  Created on: 10-Jul-2023
 *      Author: root
 */

#include<iostream>
using namespace std;
#define size 5

void input()
{
	int a[size];
	for(int i=0;i<size;i++)
	{
		cout<<"Enter array elements: ";
		cin>>a[i];
	}
}
void display()
{
	int b[size];
	for(int i=0;i<size;i++)
	{
		cout<<"\nArray elements are: ";
		cout<<b[i];
	}
}
void bubbleSort()
{
	int c[size],temp=0;
	for(int i=0;i<size-1;i++)
	{
		for(int j=0;j<size-i-1;j++)
		{
			if(c[j]>c[j+1])
			{
				temp=c[j];
				c[j]=c[j+1];
				c[j+1]=temp;
			}
		}
	}
	cout<<"\nSorted array elements are(bubble sort): ";
	for(int i=0;i<size;i++)
	{

		cout<<c[i];
	}
}
void insertionSort()
{
	int i, j, temp=0;
	int a[size];
	for(i=0;i<size;i++)
	{
		j=i;
		while(j>0 && a[j-1]>a[j])
		{
			temp=a[j];
			a[j]=a[j-1];
			a[j-1]=temp;
			j--;
		}
	}
	cout<<"\nSorted array elements are(insertion sort): ";
	for(int i=0;i<size;i++)
	{
		cout<<a[i];
	}
}
int main()
{
	//int a[size];
	int ch1, ch2;
	do{
		cout<<"\n1.Enter array elements:";
		cout<<"\n2.Display array elements:";
		cout<<"\n5.Bubble sort:";

		cout<<"\nEnter your choice: ";
		cin>>ch1;
		switch(ch1)
		{
		case 1:
			input();
			break;

		case 2:
			display();
			break;

		case 3:
			insertionSort();
			break;

		case 5:
			bubbleSort();
			break;

		default:
			cout<<"\nWrong value entered.";
			break;
		}
		cout<<"\nPress 1 to continue: ";
		cin>>ch2;

	}
	while(ch2!=0);
	return 0;
}


