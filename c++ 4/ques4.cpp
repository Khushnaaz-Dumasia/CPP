/*
 * ques4.cpp
 *
 *  Created on: 20-Sep-2023
 *      Author: root
 */

#include<iostream>
using namespace std;
class billing{
public:
	int counter_no;
	int bill_no;

	void getdata()
	{
		cout<<"\nEnter counter number: ";
		cin>>counter_no;
		cout<<"\nEnter bill number: ";
		cin>>bill_no;
	}
};
class customer1: public billing{
public:
	int size=5;
	float total;
	char name[5][20];
	customer1()
	{
		size=0;
		total=0;
	}

	int item[5];
	void getdata1(){

		for(int i=0;i<5;i++)
		{
			cout<<"\nEnter name and price of item "<<i+1;
			cin>>name[i]>>item[i];
			total=total+item[i];
		}
	}
	void display1()
	{
		cout<<"\t\t DHIRAJ SONS\n\n";
		cout<<"\t\t\t Bill NO: "<<bill_no<<endl;

		cout<<"Sr. no"<<" "<<"item"<<" "<<"price"<<endl;
		for(int i=0;i<5;i++)
		{
			cout<<i+1<<"       "<<name[i]<<"     "<<item[i]<<endl;
		}
		cout<<"\nThe total price of customer 1 is: "<<total;
	}
};
class customer2: public billing{
public:
	int size1=5;
	float total1;
	int item1[5];
	char name1[5][20];

	customer2()
	{
		size1=0;
		total1=0;
	}
	void getdata2(){
		for(int i=0;i<5;i++)
		{
			cout<<"\nEnter price of item "<<i+1;
			cin>>name1[i]>>item1[i];
			total1=total1+item1[i];
		}
	}
	void display2()
	{
		cout<<"\t\t DHIRAJ SONS\n\n";
		cout<<"\t\t\t Bill NO: "<<bill_no<<endl;

		cout<<"Sr. no"<<" "<<"item"<<" "<<"price"<<endl;
		for(int i=0;i<5;i++)
		{
			cout<<i+1<<"       "<<name1[i]<<"     "<<item1[i]<<endl;
		}
		cout<<"\nThe total price of customer 2 is: "<<total1;
	}
};
int main()
{
	customer1 obj1;
	customer2 obj2;

	obj1.getdata();
	obj1.getdata1();
	obj1.display1();

	obj2.getdata();
	obj2.getdata2();
	obj2.display2();

	return 0;

}



