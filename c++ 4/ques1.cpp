/*
 * ques1.cpp
 *
 *  Created on: 26-Sep-2023
 *      Author: root
 */

#include<iostream>
using namespace std;
class vehicle{
public:

	char type[20];//electric, fueled
	int year_bought;

	void input1(){
		cout<<"\nEnter the type of vehicle: ";
		cin>>type;
		cout<<"\nEnter the year of purchase: ";
		cin>>year_bought;
	}
	void display1(){
		cout<<"Vehicle type: "<<type<<"\nYear of purchase: "<<year_bought<<endl;
	}
};
class two_wheeler: public vehicle{
public:
	float dist;
	float mileage;

	void input2(){
		cout<<"\nEnter the distance covered: ";
		cin>>dist;
		cout<<"\nEnter mileage of vehicle: ";
		cin>>mileage;
	}
	void display2()
	{
		cout<<"Total distance covered: "<<dist<<"\nMileage of vehicle: "<<mileage<<endl;
	}
};
class bike: public two_wheeler{
public:
	char model_name[20];
	int model_num;

	void input3(){
		cout<<"\nEnter model name: ";
		cin>>model_name;

		cout<<"\nEnter model number: ";
		cin>>model_num;
	}

	void display3(){
		cout<<"Model name: "<<model_name<<"\nModel number: "<<model_num<<endl;
	}
};

int main()
{
	int size=0;
	cout<<"Enter num of inputs needed: ";
	cin>>size;
	bike b[size];

	for(int i=0;i<size;i++)
	{
		cout<<"\t Vehicle: "<<i+1<<endl;
		b[i].input1();
		b[i].input2();
		b[i].input3();
	}

	for(int i=0;i<size;i++)
	{
		cout<<"\t Vehicle: "<<i+1<<endl;
		b[i].display1();
		b[i].display2();
		b[i].display3();
	}
	return 0;
}


