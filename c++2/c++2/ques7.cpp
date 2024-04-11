/*
 * ques7.cpp
 *
 *  Created on: 25-Jul-2023
 *      Author: root
 */

#include<iostream>
using namespace std;
class calendar{
public:
	int dd, mm, yy;
	void input()
	{
		cout<<"\nEnter date: ";
		cin>>dd>>mm>>yy;
	}
	void display()
	{
		cout<<"Day= "<<dd<<endl;
		cout<<"Month= "<<mm<<endl;
		cout<<"Year= "<<yy<<endl;

		cout<<"\nMonth name= ";
		switch(mm)
		{
		case 1:
			cout<<"January";
			break;

		case 2:
			cout<<"February";
			break;

		case 3:
			cout<<"March";
			break;

		case 4:
			cout<<"April";
			break;

		case 5:
			cout<<"May";
			break;

		case 6:
			cout<<"June";
			break;

		case 7:
			cout<<"July";
			break;

		case 8:
			cout<<"August";
			break;

		case 9:
			cout<<"September";
			break;

		case 10:
			cout<<"October";
			break;

		case 11:
			cout<<"November";
			break;

		case 12:
			cout<<"December";
			break;

		default:
			cout<<"Incorrect input";
		}
		cout<<endl;
	}

	int leap_check()
	{
		cout<<"\n\nTo check if its a leap year or not: ";
		if(yy%4==0 && (yy%400==0 || yy%100!=0))
		{
			cout<<"\nGiven year "<<yy<<" is a leap year\n";
			return 1;
		}
		else{
			cout<<"\nGiven year "<<yy<<"is not a leap year\n";
			return 0;
		}
	}

	void day_check()
	{
		if((mm==1) || (mm==3) || (mm==5) || (mm==7) || (mm==8) || (mm==10) || (mm==12))
		{
			cout<<dd<<"-"<<mm<<"-"<<yy<<" has 31 days";
		}
		else if((mm==4) || (mm==6) || (mm==9) || (mm==11) || (mm==10))
		{
			cout<<dd<<"-"<<mm<<"-"<<yy<<"has 30 days";
		}
		else if((mm==2) && (leap_check()==0)){
			cout<<dd<<"-"<<mm<<"-"<<yy<<"has 28 days";
		}
		else{
			cout<<dd<<"-"<<mm<<"-"<<yy<<"has 29 days";
		}
	}
};
int main()
{
	calendar cal;
	cal.input();
	cal.display();

	cal.leap_check();
	cal.day_check();
	return 0;
}


