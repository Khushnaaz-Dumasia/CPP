/*
 * ques4.cpp
 *
 *  Created on: 07-Aug-2023
 *      Author: root
 */
#include<iostream>
using namespace std;
class employee{
public:
	int code, dob, doj, current_year = 2003;
	float bsal, hra, da;
	char name[30], desig[30], dept[30];

	void input()
	{
		cout<<"Enter code: ";
		cin>>code;
		cout<<"Enter name: ";
		cin>>name;
		cout<<"Enter designation: ";
		cin>>desig;
		cout<<"Enter department: ";
		cin>>dept;
		cout<<"Enter date of birth: ";
		cin>>dob;
		cout<<"Enter date of joining: ";
		cin>>doj;
		cout<<"Enter basic salary: ";
		cin>>bsal;
	}

	void display()
	{
		cout>>"\nCode: "<<code<<"\tName: "<<name<<"\nDesignation: "<<desig<<"\tDepartment: "<<dept<<"\nDate of birth: "<<dob<<"\t"
	}
};



