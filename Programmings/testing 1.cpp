#include <iostream>
#include <cctype>
using namespace std;
int main()
{	
	char input;
   	cout<<"Enter any character: ";
   	cin.get(input);
   	if (isalpha(input)){
        cout.put(input);	
   		cout<<"\nIt is an alphabet";}
   	if (isdigit(input))
   		cout<<"\nIt is a digit";
   	if (islower(input))
   		cout<<"\nThe letter entered is lowercase";
   	if (isupper(input))
   		cout<<"\nThe letter entered is uppercase";
   	return 0;
}

