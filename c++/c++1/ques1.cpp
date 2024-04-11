/*
 * ques1.c
 *
 *  Created on: 30-Jun-2023
 *      Author: root
 */


#include<iostream>
using namespace std;
class Rectangle
{
public:
	int length;
	int breath;
	int height;

	int calculateArea()
	{
		return length*breath;
	}

	int calculatePeri()
	{
		return 2*(length+breath);
	}
};

int main()
{
	Rectangle rect;
	cout<<"Enter values of length breath height: ";
	cin>>rect.length>> rect.breath>> rect.height;

	cout<<"Area of room= "<<rect.calculateArea();
	cout<<"\nPerimeter of room"<<rect.calculatePeri();

	return 0;
}
