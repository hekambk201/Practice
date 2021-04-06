#include<iostream>
#include<cctype>
using namespace std;

int main()
{
	char input[30];
	cout << "Put your name";

	cin.getline(input,30);

	
	for(int i=0;input[i]!='\0';i++){
	
	input[i]= toupper(input[i]);
	cout << "The upper case of the name is\n" << input;	
	}
	return 0;
}
