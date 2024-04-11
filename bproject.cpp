/*
 * Project.cpp
 *
 *  Created on: 29-Aug-2023
 *      Author: root
 */
#include<iostream>
#include<fstream>
using namespace std;
class institute
{
    public:
    int id;
    char i_name[20];
    void input()
    {
    	ofstream fp;
    	institute obj;
    	fp.open("institute.txt",ios::app);

        cout<<"Enter id of institute = ";
        cin>>id;
        cout<<"\nEnter name of institute = ";
        cin>>i_name;
        fp.write((char*)&obj,sizeof(obj));
        fp.close();
    }
    void display()
    {
    	ifstream fp;
		institute obj;
		fp.open("institute.txt",ios::in);
		cout<<"id\tname";
		while(fp.read((char*)&obj,sizeof(obj)))
		{
			cout<<obj.id<<"\t"<<obj.i_name;
			cout<<endl;
		}
		fp.close();
    }

};
class student
{
    public:
    int age,mobile;
    char nm[20],email[20],city[20];
    void input()
    {
    	ofstream fp;
		student obj;
		fp.open("student.txt",ios::app);

        cout<<"Enter student name = ";
        cin>>nm;
        cout<<"\nEnter age = ";
        cin>>age;
        cout<<"\nEnter mobile number= ";
        cin>>mobile;
        cout<<"\nEnter Email id = ";
        cin>>email;
        cout<<"\nEnter City = ";
        cin>>city;
        fp.write((char*)&obj,sizeof(obj));
        fp.close();
    }
    void display()
    {
    	ifstream fp;
		student obj;
		fp.open("student.txt",ios::in);
		cout<<"\nname\tage\tmobile\temail\tcity";
		while(fp.read((char*)&obj,sizeof(obj)))
		{
			cout<<obj.nm<<"\t"<<obj.age<<"\t"<<obj.mobile<<"\t"<<obj.email<<"\t"<<obj.city;
			cout<<endl;
		}
		fp.close();
    }
};
class course : public student , public institute
{
    int c_id,price,month;
    char name[20],faculty[20];
    public:
        void input()
        {
        	ofstream fp;
			course obj;
			fp.open("course.txt",ios::app);
        	student ::input();
        	institute::input();
            cout<<"Enter id of course = ";
            cin>>c_id;
            cout<<"\nEnter course name = ";
            cin>>name;
            cout<<"\nEnter Price = ";
            cin>>price;
            cout<<"\nEnter faculty name = ";
            cin>>faculty;
            cout<<"\nEnter course duration in month = ";
            cin>>month;
            fp.write((char*)&obj,sizeof(obj));
            fp.close();
        }
        void display()
        {
        	student::display();
        	institute::display();
        	ifstream fp;
        	course obj;
        	fp.open("course.txt",ios::in);
        	cout<<"id\tname\tprice\tfaculty\tmonth";
        	while(fp.read((char*)&obj,sizeof(obj)))
        	{
        		cout<<obj.c_id<<"\t"<<obj.name<<"\t"<<obj.price<<"\t"<<obj.faculty<<"\t"<<obj.month;
        		cout<<endl;
        	}
        	fp.close();


            cout<<id<<"\t"<<i_name<<"\t"<<nm<<"\t"<<age<<"\t"<<mobile<<"\t"<<email<<"\t"<<city<<"\t"<<c_id<<"\t"<<name<<"\t"<<price<<"\t"<<faculty<<"\t"<<month;
        }
};
int main()
{
	int c;
    course obj;

    do
    {
    	cout<<"\n1.Input";
    	cout<<"\n2.Dsiplay";
    	cout<<"\nEnter your choice = ";
    	cin>>c;

    	switch(c)
    	{
    	case 0:
			exit(0);
			break;
    	case 1:
    		obj.input();
    		break;
    	case 2:
    		obj.display();
    		break;
    	default:
    		cout<<"\nWrong choice";
    		break;
    	}



    }while(c!=0);

    return 0;
}




