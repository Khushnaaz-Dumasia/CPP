/*
 * ques1.cpp
 *
 *  Created on: 10-Aug-2023
 *      Author: root
 */

#include <iostream>
using namespace std;

class matrix{
	int a[2][3];

public:
	matrix (){

	}

	void getinput(){
		int i,j;

		for(i=0; i<2; i++)
		{
			for(j=0; j<2; j++)
			{
				cin>>a[i][j];
			}
		}
	}

	friend matrix operator + (matrix m, matrix n){
		matrix sum;
		int i,j;

		for(i=0; i<2; i++)
		{
			for(j=0; j<2; j++)
			{
				sum.a[i][j] = m.a[i][j] + n.a[i][j];
			}
		}
		return sum;
	}

	void display(){
		int i,j;
		for(i=0; i<2; i++){

			for(j=0; j<2; j++){

				cout<<a[i][j]<<"\t";
			}
			printf("\n");
		}
	}

};

int main(){

	matrix m,n,s;
	int ch=0;
	do{
		cout<<"\n1. Enter matrix 1";
		cout<<"\n2. Enter matrix 2";
		cout<<"\n3. Display matrix 1";
		cout<<"\n4. Display matrix 2";
		cout<<"\n5. Sum of matrices";

		cout<<"\nEnter your choice";
		cin>>ch;

		switch(ch)
		{
		case 1:
			cout<<"\nEnter matrix A: ";
			m.getinput();
			break;

		case 2:
			cout<<"\nEnter matrix B: ";
			n.getinput();
			break;

		case 3:
			cout<<"matrix A is \n";
			m.display();
			break;

		case 4:
			cout<<"matrix B is \n";
			n.display();
			break;

		case 5:
			s = m+n;
			cout<<"Sum of matrix \n";
			s.display();
			break;
		}

	}
	while(ch!=6);

//	cout<<"\nEnter matrix A: ";
//	m.getinput();
//	cout<<"\nEnter matrix B: ";
//	n.getinput();
//	cout<<"matrix A is \n";
//	m.display();
//	cout<<"matrix B is \n";
//	n.display();
//	s = m+n;
//	cout<<"Sum of matrix \n";
//	s.display();

	return 0;
}




