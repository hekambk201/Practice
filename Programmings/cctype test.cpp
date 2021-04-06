#include<iostream>
#include<cctype>
using namespace std;

int main()
{
	char input;
	cout << "Print any number";
	cin.get(input);
	
	if(isalpha(input)){
		cout.put(input); 
		cout << "\nInput is a number ";
	} 
	if(isupper(input)){
		cout.put(input);
		cout << "\nInput is a uppper case number"; 
	}
	return 0;
}
