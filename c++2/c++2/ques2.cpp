#include<iostream>
using namespace std;
#define size 5
class array_1D{
public:
	int a[size];
	int num;

	void input()
	{
		for(int i=0;i<size;i++)
		{
			cout<<"\nEnter array element "<<i+1<<endl;
			cin>>a[i];
		}
	}

	void display()
	{
		int i;
		for(i=0; i<size; i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	void search()
	{
		cout<<"\nEnter the array element you want to search: ";
		cin>>num;
		for(int i=0;i<size;i++)
		{
			if(num==a[i])
			{
				cout<<"\nPosition of the element: "<<i+1;
			}
		}
	}

	void bubbleSort()
	{
		int i, j;
		for(i=0;i<size-1;i++)
		{
			for(j=0;j<size-i-1;j++)
			{
				if(a[j]>a[j+1])
				{
					int temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		display();
	}

	void sum()
	{
		int i, sum=0;
		for(i=0;i<size;i++)
		{
			sum = sum + a[i];
		}
		cout<<"\nSum of array is = "<<sum;
	}

	void average()
	{
		int i, sum=0, avg=0;
		for(i=0;i<size;i++)
		{
			sum = sum + a[i];
		}
		avg=sum/size;
		cout<<"\nAverage of array is = "<<avg;
	}

	void max(){
		int i, max=0;
		for(i=0;i<size;i++)
		{
			if(max<a[i])
			{
				max=a[i];
			}
		}
		cout<<"\nThe maximum number is : "<<max;
	}

	void min(){
		int i, min=0;
		for(i=0;i<size;i++)
		{
			if(min>a[i])
			{
				min=a[i];
			}
		}
		cout<<"\nThe maximum number is : "<<min;
	}

	void swap_last(){
		int temp;
		cout<<"\nThe first value is: "<<a[0];
		cout<<"\nThe last value is: "<<a[size-1];

		temp=a[0];
		a[0]=a[size-1];
		a[size-1]=temp;

		cout<<"\nAfter Swapping...";
		cout<<"\nThe first value is: "<<a[0];
		cout<<"\nThe last value is: "<<a[size-1];
	}
};

int main()
{
	array_1D a;
	int ch=0;

	do{
		cout<<"\n1. insert";
		cout<<"\n2. Search";
		cout<<"\n3. Bubble sort";
		cout<<"\n4. Sum of array";
		cout<<"\n5. Average of array.";
		cout<<"\n6. To find maximum of array";
		cout<<"\n7. To find minimum of array";
		cout<<"\n8. To swap first and last element";

		cout<<"\nEnter your choice: ";
		cin>>ch;
		switch(ch)
		{
		case 1:
			a.input();
			break;

		case 2:
			a.search();
			break;

		case 3:
			a.bubbleSort();
			break;

		case 4:
			a.sum();
			break;

		case 5:
			a.average();
			break;

		case 6:
			a.max();
			break;

		case 7:
			a.min();
			break;

		case 8:
			a.swap_last();
			break;
		}
	}
	while(ch!=9);

	return 0;

}
