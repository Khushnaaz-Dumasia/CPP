/*
 * ques6.cpp
 *
 *  Created on: 05-Jul-2023
 *      Author: root
 */

#include<iostream>
using namespace std;
class swapping
{
public:
	int a;
	int b;
	int temp;

	int swap()
	{
		temp=a;
		a=b;
		b=temp;

		return a;
		return b;
	}
};

int main()
{
	swapping s1;
	cout<<"\nEnter the values of a and b: ";
	cin>>s1.a>>s1.b;

	s1.swap();
	cout<<"\nThe swapped values of a and b are: "<<s1.a<<s1.b;

	return 0;
}

