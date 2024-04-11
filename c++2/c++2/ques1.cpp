/*
 * ques1.cpp
 *
 *  Created on: 14-Jul-2023
 *      Author: root
 *      Length of string.
b. Upper case.
c. Lower case.
d. Comparison.
e. Copy.
f. Concatenation.
g. Reverse.
h. Palindrome.
 */


#include<iostream>
#include<string.h>
using namespace std;
class string1{
public:
	char s1[20];
	char s2[20];

	void input(char str1[], char str2[])
	{
		cout<<"\nEnter string 1: ";
		cin>>str1;

		cout<<"\nEnter string 2: ";
		cin>>str2;
	}

	void display(char str1[], char str2[])
	{
		cout<<"\nString 1: "<<str1;
		cout<<"\nString 2: "<<str2;
	}
	int length(char str[])
	{
		int l=0;
		for(int i=0;str[i]!='\0'; i++)
		{
			l++;
		}
		cout<<"\nLength of the string is: "<<l;
		return l;
	}
	void upper(char str[])
	{
		int i;
		for(i=0;str[i]!='\0'; i++)
		{
			if(str[i]>='a' && str[i]<='z')
			{
				str[i]=str[i]-32;
			}
		}
		cout<<"\nThe string in uppercase is: "<<str;
	}
	void lower(char str[])
	{
		int i;
		for(i=0;str[i]!='\0'; i++)
		{
			if(str[i]>='A' && str[i]<='Z')
			{
				str[i]=str[i]+32;
			}
		}
		cout<<"\nThe string in lowercase is: "<<str;
	}
	int compare(char str1[], char str2[])
	{
		int i=0, diff=0;
		while(str1[i]!='\0')
		{
			if(str1[i]==str2[i])
			{
				str1++;
				str2++;
			}
			else
			{
				diff=str1-str2;
				break;
			}
		}
		return diff;
	}

	void copy(char str1[], char str2[])
	{
		int i=0;
		for(i=0; str1[i]!='\0'; i++)
		{
			str2[i]=str1[i];
		}
		str2[i]='\0';
		cout<<"\nString copied: "<<str2<<endl;
	}

	void concat(char str1[], char str2[])
	{
		int i=0, j=0;
		//l=length(str1);
		while(str1[i]!='\0')
		{
			str1++;
		}
		while(str2[j]!='\0')
		{
			str1[i]=str2[j];
			str1++;
			str2++;
		}
		str1[i]='\0';
		cout<<"\nConcatenated string: "<<str1<<endl;
	}
	void reverse(char str[])
	{
		int l=0, i=0;
		while(str[i]!='\0')
		{
			i++;
			l++;
		}
		cout<<"\nReversed string: ";
		for(i=l-1; i>=0;i--)
		{
			cout<<" "<<str[i];
		}
	}

	int palindrome(char str[])
	{
		int l;
		l=length(str);
		int start=0;
		int end=l-1;
		while(start<end)
		{
			if(str[start]!=str[end])
			{
				return 1;
			}
			start++;
			end++;
		}
//		if(palindrome(str)==1)
//		{
//			cout<<"\nString is palindrome";
//		}
//		else{
//			cout<<"\nString is not palindrome";
//		}
		return 0;
	}
		};
int main()
{
	string1 str;
	int ch, diff=0;
	char s1[20], s2[20];
	do{
		cout<<"\n1.input";
		cout<<"\n2. Display";
		cout<<"\n3. Length of string";
		cout<<"\n4. Upper case.";
		cout<<"\n5. Lower case.";
		cout<<"\n6. Comparison.";
		cout<<"\n7. Copy.";
		cout<<"\n8. Concatenation";
		cout<<"\n9. Reverse";
		cout<<"\n10. Palindrome";
		cout<<"\nEnter your choice: ";
		cin>>ch;

		switch(ch)
		{
		case 1:
			str.input(s1, s2);
			break;

		case 2:
			str.display(s1, s2);
			break;

		case 3:
			str.length(s1);
			str.length(s2);
			break;

		case 4:
			str.upper(s1);
			str.upper(s2);
			break;

		case 5:
			str.lower(s1);
			str.lower(s2);
			break;

		case 6:
			diff=str.compare(s1, s2);
			if(diff==0)
			{
				cout<<"\nEqual";
			}
			else
			{
				cout<<"\nNot equal";
			}
			break;

		case 7:
			str.copy(s1, s2);
			break;

		case 8:
			str.concat(s1, s2);
			break;

		case 9:
			str.reverse(s1);
			str.reverse(s2);
			break;

		case 10:
			str.palindrome(s1);
			str.palindrome(s2);
			break;
		}
	}
	while(ch!=11);
	return 0;
}

