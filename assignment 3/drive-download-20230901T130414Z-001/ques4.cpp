/*
 * ques4.cpp
 *
 *  Created on: 24-Aug-2023
 *      Author: root
 */


#include<iostream>
#include<string.h>
using namespace std;
class cstring{
public:
	char str1[100], str2[100];
	int i;
	int j;

	void operator<(cstring c)//input
	{
		cout<<"\nEnter string 1: ";
		cin>>str1;

		cout<<"\nEnter string 2: ";
		cin>>str2;
	}

	void operator>(cstring c)//display
	{
		cout<<"\nString 1 = "<<str1;
		cout<<"\nString 2 = "<<str2;
	}

	void operator +(cstring c)
	{
		for(i=0; str1[i]!='\0'; i++);
		for(j=0;str2[j]!='\0'; j++, i++)
		{
			str1[i]=str2[j];
		}
		str1[i]='\0';
		cout<<"\nConcatenated string is: "<<str1<<endl;
	}

	void operator ==(cstring c)//compare
	{
		int diff;
		diff=0;
		i=0;
		while(str1[i]!='\0' && str2[i]!='\0')
		{
			if(str1[i]==str2[i])
			{
				i++;
			}
			else
			{
				diff++;
				break;
			}
		}
		if(diff==0)
		{
			cout<<"\nBoth strings are equal";
		}
		else{
			cout<<"\nBoth strings are unequal";
		}
	}

	void operator !=(cstring c)//not equal
	{
		int diff;
		diff=0;
		i=0;
		while(str1[i]!='\0' && str2[i]!='\0')
		{
			if(str1[i]==str2[i])
			{
				i++;
			}
			else
			{
				diff++;
				break;
			}
		}
		if(diff!=0)
		{
			cout<<"\nBoth strings are unequal";
		}
		else{
			cout<<"\nBoth strings are equal";
		}
	}

	void operator<=(cstring c)
	{
		int l1=0, l2=0;
		for(i=0; str1[i]!='\0'; i++)
		{
			l1++;
		}
		for(j=0; str2[i]!='\0'; j++)
		{
			l2++;
		}
		if(l1<=l2)
		{
			cout<<"\nLength of string 1 is less then string 2";
		}
		else if(l2<=l1){
			cout<<"\nLength of string 2 is less then string 1";
		}
		else{
			cout<<"\nLength of both strings are equal";
		}
	}

	void operator>=(cstring c)
	{
		int l1=0, l2=0;
		for(i=0; str1[i]!='\0'; i++)
		{
			l1++;
		}
		for(i=0; str2[i]!='\0'; i++)
		{
			l2++;
		}
		if(l1>=l2)
		{
			cout<<"\nLength of string 1 is greater then string 2";
		}
		else if(l1<=l2){
			cout<<"\nLength of string 2 is greater then string 1";
		}
		else{
			cout<<"\nLength of both strings are equal";
		}
	}
};
int main()
{
	cstring c1;
	int ch=0;
	do{
		cout<<"\n1. Input strings";
		cout<<"\n2. Display strings";
		cout<<"\n3. Concatenate";
		cout<<"\n4. Compare";
		cout<<"\n5. To check not equal";
		cout<<"\n6. To check <= condition";
		cout<<"\n7. To check >= condition";

		cout<<"\nEnter your choice: ";
		cin>>ch;
		switch(ch)
		{
		case 1:
			c1.operator <(c1);
			break;

		case 2:
			c1.operator >(c1);
			break;

		case 3:
			c1.operator +(c1);
			break;

		case 4:
			c1.operator ==(c1);
			break;

		case 5:
			c1.operator !=(c1);
			break;

		case 6:
			c1.operator <=(c1);
			break;

		case 7:
			c1.operator >=(c1);
			break;
		}
	}
	while(ch!=8);
}
