/*
 * ques3.cpp
 *
 *  Created on: 07-Aug-2023
 *      Author: root
 */

#include<iostream>
using namespace std;
class date{
public:
	int dd, mm, yy;
	int hh, min, ss;
	void dateInput()
	{
		cout<<"\nEnter a date: ";
		cin>>dd>>mm>>yy;
	}

	void timeInput()
	{
		cout<<"\nEnter a time: ";
		cin>>hh>>min>>ss;
	}

	void format()
	{
		cout<<"\nDate format is: "<<dd<<"/"<<mm<<"/"<<yy;
	}

	void diff()
	{
		int day, mon, year;
		cout<<"\nEnter another date: ";
		cin>>day>>mon>>year;

//		cout<<"\nDifference in date is: ";
//		d=
	}

	void leap()
	{
		if(yy%4==0 && (yy%400==0 || yy%100!=0))
		{
			cout<<"\nIt is a leap year";
		}
		else
		{
			cout<<"\nIt is not a leap year";
		}
	}

	void retDay()
	{
		cout<<dd;
	}

	void retMonth()
	{
		cout<<mm;
	}

	void retYear()
	{
		cout<<yy;
	}

	void retHour()
	{
		cout<<hh;
	}

	void retMinute()
	{
		cout<<min;
	}

	void retSecond()
	{
		cout<<ss;
	}
};
int main()
{
	date d1;
	int ch;
		do{
			cout<<"\n1. Insert date";
			cout<<"\n2. Insert time";
			cout<<"\n3. Format date";
			cout<<"\n4. Difference in dates";
			cout<<"\n5. Check leap year";
			cout<<"\n6. Retrieve day";
			cout<<"\n7. Retrieve Month";
			cout<<"\n8. Retrieve Year";
			cout<<"\n9. Retrieve Hour";
			cout<<"\n10. Retrieve Minute";
			cout<<"\n11. Retrieve Second";
			cout<<"\nEnter your choice: ";
			cin>>ch;

			switch(ch)
			{
			case 1:
				d1.dateInput();
				break;

			case 2:
				d1.timeInput();
				break;

			case 3:
				d1.format();
				break;

			case 4:
				d1.diff();
				break;

			case 5:
				d1.leap();
				break;

			case 6:
				d1.retDay();
				break;

			case 7:
				d1.retMonth();
				break;

			case 8:
				d1.retYear();
				break;

			case 9:
				d1.retHour();
				break;

			case 10:
				d1.retMinute();
				break;

			case 11:
				d1.retSecond();
				break;
			}
		}
		while(ch!=12);
}

