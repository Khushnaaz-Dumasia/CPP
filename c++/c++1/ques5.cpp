/*
 * ques5.c
 *
 *  Created on: 05-Jul-2023
 *      Author: root
 */

#include<iostream>
using namespace std;
class ascii
{
public:
	char a;
	int value()
	{
		return int(a);
	}
};

int main()
{
	ascii a;
	cout<<"\nEnter a character: ";
	cin>>a.a;

	cout<<"\nThe ascii value of entered character is:"<<a.value();

	return 0;
}
