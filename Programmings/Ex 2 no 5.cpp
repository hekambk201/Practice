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
	int i;
	int j;
	cout << " Please enter i ";
	cin >> i;
	
	if (i>3.0)
	{
		if (i<12)
		{
			j=i/100*5;
		}
		else 
		{
		
		    j=10/i*2.5;
		}
	}
	else 
	    j=5.5*i/2;
	cout << " j is " << j;
	
	return 0;
}
