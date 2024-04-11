// /*
//  * ques5.cpp
//  *
//  *  Created on: 17-Aug-2023
//  *      Author: root
//  */

// #include<iostream>
// using namespace std;
// class binary{
// public:
// 	float num;

// 	friend binary operator >>(binary b1, binary b2)//input
// 	{
// 		cout<<"Enter two number= ";
// 		cin>>b1.num>>b2.num;
// 		return b1;
// 	}
// 	friend void operator <<(binary b1, binary b2)//display
// 	{
// 		cout<<"\nNumbers entered are: "<<b1.num<<b2.num;
// 	}

// 	friend binary operator +(binary b1, binary b2)
// 	{
// 		binary result;
// 		result.num = b1.num + b2.num;
// 		cout<<"\nSum of numbers = "<<result.num;
// 		return result;
// 	}

// 	friend binary operator -(binary b1, binary b2)
// 	{
// 		binary result;
//         result.num = b1.num - b2.num;
// 		cout<<"\nDifference of numbers = "<<result.num;
//         return result;
// 	}

// 	friend binary operator *(binary b1, binary b2)
// 	{
// 		binary result;
//         result.num = b1.num * b2.num;
// 		cout<<"\nProduct of numbers = "<<result.num;
//         return result;
// 	}

// 	friend binary operator /(binary b1, binary b2)
// 	{
// 		binary result;
//         result.num = b1.num / b2.num;
// 		cout<<"\nDivision of numbers = "<<result.num;
//         return result;
// 	}
// };

// int main()
// {
// 	binary b1, b2, result;
//     int choice = 0;

//     while (true) {
//         cout << "\nEnter your choice: ";
//         cin >> choice;

//         switch (choice) {
//         case 1:
//             b1 >> b2;
//             break;

//         case 2:
//             b1 << b2;
//             break;

//         case 3:
//             result = b1 + b2;
//             //cout << "\nSum of numbers = " << result.num;
//             break;

//         case 4:
//             result = b1 - b2;
//             //cout << "\nDifference of numbers = " << result.num;
//             break;

//         case 5:
//             result = b1 * b2;
//             //cout << "\nProduct of numbers = " << result.num;
//             break;

//         case 6:
//             result = b1 / b2;
//             //cout << "\nDivision of numbers = " << result.num;
//             break;

//         case 7:
//             cout << "\nExited";
//             exit(0);

//         default:
//             cout << "\nInvalid choice";
//         }
//     }

// }


#include <iostream>
using namespace std;

class Binary {
private:
    float num;

public:
    Binary() : num(0.0) {}

    friend istream& operator>>(istream& in, Binary& b) {
        cout << "Enter a float number: ";
        in >> b.num;
        return in;
    }

    friend ostream& operator<<(ostream& out, const Binary& b) {
        out << "Value: " << b.num;
        return out;
    }

    Binary operator+(const Binary& other)
    {
        Binary result;
        result.num = this->num + other.num;
        return result;
    }

    Binary operator-(const Binary& other)
    {
        Binary result;
        result.num = this->num - other.num;
        return result;
    }

    Binary operator*(const Binary& other)
    {
        Binary result;
        result.num = this->num * other.num;
        return result;
    }

    Binary operator/(const Binary& other)
    {
        if (other.num != 0) {
            Binary result;
            result.num = this->num / other.num;
            return result;
        } else {
            cerr << "Error: Division by zero." << endl;
            // Return a default-constructed object to indicate an error.
            return Binary();
        }
    }
};

int main() {
    Binary b1, b2, result;
    
    cout << "Enter values for Binary 1:" << endl;
    cin >> b1;

    cout << "Enter values for Binary 2:" << endl;
    cin >> b2;

    result = b1 + b2;
    cout << "Sum: " << result << endl;

    result = b1 - b2;
    cout << "Difference: " << result << endl;

    result = b1 * b2;
    cout << "Product: " << result << endl;

    result = b1 / b2;
    cout << "Division: " << result << endl;

    return 0;
}
