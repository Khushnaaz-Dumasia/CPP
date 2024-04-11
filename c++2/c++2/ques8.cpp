/*
 * ques8.cpp
 *
 *  Created on: 04-Aug-2023
 *      Author: root
 */

#include<iostream>
#include<string.h>
using namespace std;
#define size 3
class book{
public:
	int b_id[size], price[size];
	char name[size][20], author[size][20];
	float edition[size];

	void input(){
		for(int i=0;i<size;i++)
		{
			cout<<"\nEnter book id: ";
			cin>>b_id[i];
			cout<<"\nEnter book name: ";
			cin>>name[i];
			cout<<"\nEnter book author: ";
			cin>>author[i];
			cout<<"\nEnter book price: ";
			cin>>price[i];
			cout<<"\nEnter book edition: ";
			cin>>edition[i];
		}
	}

	void display(){
		for(int i=0;i<size;i++)
		{
			cout<<"\n Book id= "<<b_id[i]<<"\nBook name= "<<name[i]<<"\nAuthor = "<<author[i]<<"\nPrice of book= "<<price[i]<<"\nEdition of the book= "<<edition[i]<<endl;
		}
	}

	void sortPrice()
	{
		int temp, i, j;
		for(i=0;i<size;i++)
		{
			for(j=i+1;j<size;j++)
			{
				if(price[i]>price[j])
				{
					temp=price[i];
					price[i]=price[j];
					price[j]=temp;
				}
			}
		}

		cout<<"\nSorted according to price: ";
		for(i=0;i<size;i++)
		{
			cout<<"\n Book id= "<<b_id[i]<<"\nBook name= "<<name[i]<<"\nAuthor = "<<author[i]<<"\nPrice of book= "<<price[i]<<"\nEdition of the book= "<<edition[i]<<endl;
		}
	}


	void search_by_author()
	{
		char ch[40];
		cout<<"\nEnter the author you want to search: ";
		cin>>ch;

		int i;
		for(i=0;i<size; i++)
		{
			if(strcmp(author[i],ch)==0)
			{
				cout<<"\n Book id= "<<b_id[i]<<"\nBook name= "<<name[i]<<"\nAuthor = "<<author[i]<<"\nPrice of book= "<<price[i]<<"\nEdition of the book= "<<edition[i]<<endl;
			}
		}
	}


};

int main()
{
	book bk1;
	int ch=0;
	do{
		cout<<"\n1.input";
		cout<<"\n2. Display";
		cout<<"\n3. Length of string";
		cout<<"\n4. Upper case.";

		cout<<"\nEnter your choice: ";
		cin>>ch;

		switch(ch)
				{
				case 1:
					bk1.input();
					break;

				case 2:
					bk1.display();
					break;

				case 3:
					bk1.sortPrice();
					break;

				case 4:
					bk1.search_by_author();
					break;
				}
	}
	while(ch!=4);
	return 0;
}
