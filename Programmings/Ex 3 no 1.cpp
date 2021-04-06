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
	int length;
	int width;
	int area;
	
	cout << " Please enter the length of the rectangle ";
	cin >> length;
	
	cout << " Please enter the width of the rectangle ";
	cin >> width;
	
	area=length*width;
	
	cout << " The area of the rectangle is " << area << endl;
	
	if (area<=10)
	cout << " The size is accepted ";
	
	else 
	cout << " The size is not accepted ";
	
	return 0;
}
