#include<iostream>
using namespace std;

void printx(int);

int main(){
	int num;
	cout << " Testing print function";
	cin >> num;
	printx(num);
	cout << " Tested";
	return 0;
}


void printx(int num){
	int i;
	for(i=0;i<num;i++){
		cout << " \nHello!";
		cout << " \n\n                   Hello!";
	}
}
