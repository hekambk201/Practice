/********************************
*  Name:Sheikh Mesba Ul Hekam   * 
*  Matric:A17CS4035             * 
*  Section:3                    *
*  Date:16/03/18                *
*                               *                       
********************************/

#include<iostream>
using namespace std;

int main()
{
	int number1;
	int number2;
	
	cout << " Please enter the first number ";
	cin >> number1;
	cout << " Please enter the second number ";
	cin >> number2;
	
	if (number1 > number2)
	{
	cout << " number1 is bigger \n ";
	cout << " number2 is smaller ";
    }
    else if (number2 > number1)
    {
     cout << " number2 is bigger \n ";
     cout << " number1 is smaller ";
	}
	else if (number1 == number2)
	{
	cout << " The numbers are same";
	}
	return 0;
	
}
