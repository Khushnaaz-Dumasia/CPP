/*
 * project.cpp
 *
 *  Created on: 04-Oct-2023
 *      Author: root
 */


#include<iostream>
using namespace std;
#define size 2
class electronic_store{

public:

	virtual void display()=0;

	//virtual ~electronic_store()=0;
};

class office_devices: virtual public electronic_store{
public:
	int d_id;
	char d_name[20];
	char name[20];
	char type[20];
	float price;
	float dis;
	void input()
	{
		cout<<"\nEnter store name: ";
		cin>>name;
		cout<<"\nEnter store ownership type: ";
		cin>>type;
		cout<<"\nEnter device ID: ";
		cin>>d_id;
		cout<<"\nEnter device name: ";
		cin>>d_name;
		cout<<"\nEnter price of device: ";
		cin>>price;
		cout<<"\nDiscount: ";
		cin>>dis;
	}

	void display()
	{
		cout<<"\nStore name: "<<name;
		cout<<"\nStore type: "<<type;
		cout<<"\nDevice ID: "<<d_id;
		cout<<"\nDevice name: "<<d_name;
		cout<<"\nPrice of appliance: "<<price;
		cout<<"\nDiscount applicable: "<<dis;
	}
};

class home_appliances: virtual public electronic_store{
public:
	int h_id;
	char category[20];//electronic, hardware
	char app_name[20];
	float cost;
	float disc;

	void input()
	{
		cout<<"\nEnter appliance ID: ";
		cin>>h_id;
		cout<<"\nEnter category of purchase: ";
		cin>>category;
		cout<<"\nEnter appliance name: ";
		cin>>app_name;
		cout<<"\nEnter cost: ";
		cin>>cost;
		cout<<"\nDiscount: ";
		cin>>disc;
	}
	void display()
	{
		cout<<"\nAppliance ID: "<<h_id<<" Category of purchase: "<<category;
		cout<<"\nAppliance name: "<<app_name;
		cout<<"\nCost of appliance: "<<cost;
		cout<<"\nDiscount applicable: "<<disc;
	}
};

class billing: virtual public electronic_store, public office_devices, public home_appliances{
public:
	int bill_no;
	int c_id;
	float h_price;//gross price
	float o_price;

	void input()
	{
		cout<<"\nEnter bill number: ";
		cin>>bill_no;
		cout<<"\nEnter customer ID: ";
		cin>>c_id;
	}

	void display()
	{
		cout<<"\n";
		cout<<"Bill Number: "<<bill_no;
		cout<<"\nCustomer ID: "<<c_id;
		h_price = price - dis;//*******
		cout<<"\nTotal price for home appliances: "<<h_price;

		o_price= cost - disc;
		cout<<"\nTotal price for office devices: "<<o_price;
	}

};

int main()
{
	electronic_store *e;
	office_devices *od=new office_devices();
	home_appliances *ha=new home_appliances();
	billing *b=new billing();
	od->input();
	ha->input();
	b->input();
	e=od;
	e->display();
	e=ha;
	e->display();
	e=b;
	e->display();
}
