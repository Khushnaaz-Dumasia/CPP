/*
 * ques3.cpp
 *
 *  Created on: 20-Sep-2023
 *      Author: root
 */

#include<iostream>
using namespace std;

int size = 3;
class employee{
public:
	int emp_id;
	char dept[20];//department

	employee()
	{
		emp_id=0;
	}
	void input()
	{
		cout<<"\nEnter employee ID and department: ";
		cin>>emp_id>>dept;
	}
	void display1()
	{
		cout<<"\nemployee ID = "<<emp_id<<endl;
		cout<<"\nDepartment = "<<dept<<endl;
	}
};

class salary{
public:
	float da;//20%
	float ha;//30%
	float basic_sal;
	float gross_sal;
	salary()
	{
		basic_sal=0;
		da=0;
		ha=0;
		gross_sal=0;
	}
	void getdata()
	{
		cout<<"\nEnter basic salary of employee: ";
		cin>>basic_sal;
	}

	void putdata()
	{
		cout<<"\nBasic salary: "<<basic_sal;
		gross_sal=(basic_sal * 0.3) + (basic_sal * 0.2) + basic_sal;
		cout<<"\nTotal salary: "<<gross_sal;
	}

};

class details: public employee, public salary{
public:
	char emp_name[20];
	int total_hours;

	details()
	{
		total_hours=0;
	}
	void hours()
	{
		cout<<"\nEnter name of employee: ";
		cin>>emp_name;
		cout<<"\nEnter the total working hours of employee per day: ";
		cin>>total_hours;
	}
	void display()
	{
		cout<<"\n"<<emp_name;
		cout<<"\n"<<"Total working hours per day = "<<total_hours;
	}
};

int main()
{
	details d[size];
	for(int i=0;i<size;i++)
	{
		cout<<"employee "<<i+1<<endl;
		d[i].input();
		d[i].getdata();
		d[i].hours();
	}
	for(int i=0;i<size;i++)
	{
		cout<<"employee "<<i+1<<endl;
		d[i].display1();
		d[i].putdata();
		d[i].display();
		cout<<endl;
	}
	return 0;
}


