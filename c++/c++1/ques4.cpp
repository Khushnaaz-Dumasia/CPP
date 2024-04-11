/*
 * ques4.cpp
 *
 *  Created on: 30-Jun-2023
 *      Author: root
 */

#include<iostream>
using namespace std;
class sign{
public:
	float n;

	float check()
	{
		if(n>0)
		{
			cout<<"\nThe number is positive";
		}
		else if(n==0)
		{
			cout<<"\nThe number is zero";
		}
		else
		{
			cout<<"\nThe number is negative";
		}
		cout<<"\n";
		return n;
	}
};

int main()
{
	sign s;
	cout<<"\nEnter a number: ";
	cin>>s.n;

	cout<<"\nResult:"<<s.check();

	return 0;
}


