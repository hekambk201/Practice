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
	int monthly_salary;
	int months;
	int children;
	int amount_waived;
	int yearly_salary;
	int tax;

	cout << " Please enter your monthly salary ";
	cin >> monthly_salary;
	
	cout << " How many children do you have? ";
	cin >> children;
	
	if (children==0)
	   amount_waived==0;
	else if (children<=3)
	   amount_waived==150;
	else if (children>3)
	   amount_waived==250;

	yearly_salary=monthly_salary*12;
	

	if (yearly_salary>10000);
	tax=monthly_salary*(11-children*amount_waived)*0.25; 
	
	cout << " Your tax amount is " << tax << endl; 
	return 0;
	

	
} 
