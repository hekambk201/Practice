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

{	int hours;
	int payment1;
	int payment2;
	int payment3;
	int payment4;
	char car;
	char van;
	char bus;
	char lorry;
	char truck;
	
	cout << " How many hours? "<< endl;
	cin >> hours;
	
	
	cout << " What is the type of your vehicles? " << endl;
	cin >> car;
	cin >> van;
	cin >> bus;
	cin >> lorry;
	cin >> truck;
	

	
	payment1=hours*0.60;
	payment2=hours*0.80;
	payment3=hours*1.00;
	payment4=hours*1.20;
	
	if (car)
	cout << "payment " << payment1;
	else if (van)
	cout << " payment " << payment2;
	else if (bus)
	cout << " Payment " << payment3;
	else if (lorry) 
	cout << " Payment " << payment4;
    else if (truck)
    cout << " Payment " << payment4;

	return 0;

}
