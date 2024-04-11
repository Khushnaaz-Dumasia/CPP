/*
 * ques8.cpp
 *
 *  Created on: 06-Jul-2023
 *      Author: root
 */


#include<iostream>
using namespace std;
int main()
{
	int n, i=1, j, p=0, sum=0;
	cout<<"\nEnter the number: ";
	cin>>n;

	while(n!=0)
	{
		p=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				p++;
			}
			if(p==2)
			{
				cout<<i<<"";
				sum=sum+i;
				n--;
			}
			i++;
		}
	}
	cout<<endl<<"Sum: "<<sum;
	return 0;
}
