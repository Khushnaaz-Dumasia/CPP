/*
 * ques2.cpp
 *
 *  Created on: 09-Aug-2023
 *      Author: root
 */
#include<iostream>
using namespace std;
class time{
public:
	int hours, minutes, seconds;
	//overloading == operator
	friend time operator==(time t1, time t2)
	{
		 if(t1.hours == t2.hours)
		 {
			 if(t1.minutes == t2.minutes)
			 {
				 if(t1.seconds == t2.seconds)
				 {
					 cout<<"\nDates entered are same";
				 }
				 else{
					cout<<"\nDates entered are not same";
				 }
			 }
		 }
	}
	void operator >>(time t)//input
	{
		cout<<"\nEnter time: "<<endl;
		cin>>hours>>minutes>>seconds;
	}
	void operator <<(time t)//display
	{
		cout<<"\nTime entered is= "<<hours<<":"<<minutes<<":"<<seconds;
	}


}t1,t2;

//void time::input()
//{
//	cout<<"\nEnter time= ";
//	cin>>hours>>minutes>>seconds;
//}
//void time::display()
//{
//	cout<<"\nTime entered is= "<<hours<<":"<<minutes<<":"<<seconds;
//}

int main()
{

	t1.operator>>(t1);
	t1.operator<<(t1);
	//time t2;
	t2.operator>>(t2);
	t2.operator<<(t2);

	// if(t1 == t2)
	// {
	// 	cout<<"\nBoth the values of time entered are equal";
	// }
	// else
	// {
	// 	cout<<"\nBoth the values of time entered are different";
	// }

	operator==(t1, t2);
	return 0;
}
