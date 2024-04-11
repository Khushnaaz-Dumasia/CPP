/*
 * ques2.cpp
 *
 *  Created on: 21-Sep-2023
 *      Author: root
 */

#include<iostream>
using namespace std;
class patient{
public:
	char name[20];
	char doc_name[30];

	void input1(){
		cout<<"\nEnter patient's name: ";
		cin>>name;
		cout<<"\nEnter referring doctor's name: ";
		cin>>doc_name;
	}
	void display1(){
		cout<<"\nPatient's name: "<<name;
		cout<<"\nDoctor's name: "<<doc_name;

	}
};
class IPD{
public:

	int ward_no;
	int bed_no;
	float cpd;

	void input2()
	{
		cout<<"\nEnter ward number: ";
		cin>>ward_no;
		cout<<"\nEnter bed number: ";
		cin>>bed_no;
		cout<<"\nThe charge per day of of the room: ";
		cin>>cpd;
	}

	void display2()
	{
		cout<<"\nWard num: "<<ward_no<<"\nBed num: "<<bed_no<<"\nCharge per day: "<<cpd<<endl;
	}
};
class IPD_patient: public IPD, public patient{
public:
	int admit_days;

	void input3(){
		cout<<"\nEneter number of days admitted: ";
		cin>>admit_days;
	}

	void display3()
	{
		cout<<"\nThe number of days admitted is/are: "<<admit_days<<endl;
	}
};
int main()
{
	int size=0;
	cout<<"\nEnter the number of patients: ";
	cin>>size;
	IPD_patient p1[size];


	for(int i=0;i<size;i++)
	{
		cout<<"\t Patient num: "<<i+1<<endl;
		p1[i].input1();
		p1[i].input2();
		p1[i].input3();
	}
	for(int i=0;i<size;i++)
	{
		cout<<"\t Patient num: "<<i+1<<endl;
		p1[i].display1();
		p1[i].display2();
		p1[i].display3();
	}

}

