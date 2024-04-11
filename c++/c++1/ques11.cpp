/*
 * ques11.cpp
 *
 *  Created on: 06-Jul-2023
 *      Author: root
 */


#include<iostream>
using namespace std;
int main()
{
	char s[20];
	int v=0,i=0;
	cout<<"\nEnter a string: ";
	cin>>s;
	while(s[i]!='\0')
	{
		if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U')
		{
			v++;
		}
		i++;
	}

	cout<<"\nThe number of vowels are :"<<v;
	return 0;
}

