/*
 * ques2.cpp
 *
 *  Created on: 30-Jun-2023
 *      Author: root
 */

#include<iostream>
using namespace std;
class convert
{
public:
	float f, c;

public:
	float temp()
	{
		return (1.8*c)+32;
	}
};
int main()
{
	convert temp1;
	cout<<"Enter temperature in degree celcius: ";
	cin>>temp1.c;

	cout<<"\nTemperature in degree fahrenheit: "<<temp1.temp();

	return 0;
}

