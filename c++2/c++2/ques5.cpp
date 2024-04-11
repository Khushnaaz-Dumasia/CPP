/*
 * ques5.cpp
 *
 *  Created on: 25-Jul-2023
 *      Author: root
 */


#include<iostream>
using namespace std;
#define size 5
class student{
public:
	int rno;
	char name[20];
	int m1, m2, m3, total;
	float per;
	//char grade;

	void input()
	{
			cout<<"\nEnter name: ";
			cin>>name;
			cout<<"\nEnter roll number: ";
			cin>>rno;
			cout<<"\nEnter marks of 3 subjects: ";
			cin>>m1>>m2>>m3;
	}

void display()
{
		cout<<"\nName="<<name<<"\nRoll number="<<rno<<"\nMarks 1="<<m1<<"\tMarks 2="<<m2<<"\tMarks 3="<<m3;
}

void calculate()
{
	total= m1+m2+m3;
	cout<<"\nTotal = "<<total;

	per=total/3;
	cout<<"\nPercentage = "<<per;

	if(per>=90)
	{
		cout<<"Grade A";
	}
	else if(per>=80)
	{
		cout<<"Grade B";
	}
	else if(per>=70)
	{
		cout<<"Grade C";
	}
	else
	{
		cout<<"Grade D";
	}
}

/*void rank1()
{
	int i;
	for(i=0;i<size;i++)
	{
		if(total)
	}
}*/

};
int main()
{
	student S[3];
	int ch1=0;
	do{
		cout<<"\n1. Enter student details";
		cout<<"\n2. Display student details";
		cout<<"\n3. Calculate student details";
		cout<<"\n4. Display student details with 1st rank";
		cout<<"\nEnter your choice: ";
		cin>>ch1;
		switch(ch1)
		{
		case 1:
			for(int i=0;i<size;i++)
			{
				cout<<"\nEnter details of student"<<i+1<<endl;
				S[i].input();
			}
			break;

		case 2:
			for(int i=0;i<size;i++)
			{
				cout<<"\nDetails of student"<<i+1<<endl;
				S[i].display();
			}
			break;

		case 3:

			for(int i=0;i<size;i++)
			{
				cout<<"\nTotal percentage and grade of student"<<i+1<<endl;
				S[i].calculate();
			}
			break;

		case 4:
			float max=0;
			for(int i=0;i<size;i++)
			{
				if(max<S[i].per)
				{
					max=S[i].per;
				}
			}
			cout<<"\nThe student with 1st Rank is: "<<endl;
			for(int i=0;i<size;i++)
			{
				if(max==S[i].per)
				{
					S[i].display();
					S[i].calculate();
				}
			}
			break;
		}
	}
	while (ch1!=5);
	return 0;
}
