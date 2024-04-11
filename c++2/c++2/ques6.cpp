/*
 * ques6.cpp
 *
 *  Created on: 07-Aug-2023
 *      Author: root
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	float x = 1.3456;
	int z=8;

	cout<<fixed<<setprecision(3)<<x<<endl;
	cout<<setw(10)<<x<<endl;
	cout<<scientific<<x<<endl;

	cout<<"decimal Value "<<setbase(10)<<z<<endl;
	cout<<"Hexadecimal Value "<<setbase(16)<<z<<endl;
	cout<<"Octal Value "<<setbase(8)<<z<<endl;

	return 0;

}


