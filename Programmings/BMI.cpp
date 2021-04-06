/********************************
*  Name:Sheikh Mesba Ul Hekam   * 
*  Matric:A17CS4035             * 
*  Section:3                    *
*  Date:16/03/18                *
*                               *                       
********************************/

#include<iostream>
using namespace std;

int main ()
{
	  int ht,
	      wt;
	      double BMI;
	      
	      cout <<"Please enter the value of height ";
	      cin >> ht;
	      
	      cout <<"Please enter the value of weight ";
	      cin >> wt;
	      
	      BMI = wt / (ht * ht);
	      
	      cout << "This is the value of BMI";
	      cout << BMI;
	      
	      return 0;
	      
}
