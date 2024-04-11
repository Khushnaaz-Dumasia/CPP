/*
 * ques3.cpp
 *
 *  Created on: 18-Aug-2023
 *      Author: root
 */


#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
class word{
public:
	char str[20];
	void input();
	void display();
	void operator ~()
	{
		int count=0;
		while(str[count]!='\0')
		{
			count++;
		}
		//cout<<count;
		for(int i=0;i<count;i++)
		{
			while(str[i]!='\0')
			{
				if(str[i]>='a' && str[i]<='z')
				{
					str[i]=str[i]-32;
				}
				else if(str[i]>='A' && str[i]<='Z')
				{
					str[i]=str[i]+32;
				}
				i++;
			}
		}
		cout<<"\nString = "<<str;

	}
	//void operator +();
};



void word::input(){
	cout<<"\nEnter a string: ";
	cin>>str;
}

void word::display(){
	cout<<"\nThe word is: "<<str<<endl;
}
int main()
{
	word s;
	int ch;
	{
		back:
		cout<<"\nEnter your choice: ";
		cin>>ch;
	}
	switch(ch)
	{
	case 1:
		s.input();
		goto back;
		break;

	case 2:
		s.display();
		goto back;
		break;

	case 3:
		~s;
		goto back;
		break;

	case 4:
		cout<<"\nExited"<<endl;
		exit(0);
		break;
	}
	return 0;
}

