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
	int T;
	
	cout << " Please enter T ";
	cin >> T;
	
	if (T < 0)
	cout << " T is 'tahap beku' ";
	
	else if (T==100)
	cout << " T is 'tahap didih'' ";
	
	else if (T>100)
	cout << " T is 'hahap wap'' ";
	
	return 0;
}
