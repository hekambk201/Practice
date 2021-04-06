#include<iostream>
using namespace std;

void first();
void second();

int main(){
	cout << "main is first to declared ";
	first();
	second();
	cout << "\nback to main again";
	return 0;
}
void first(){
	cout << "\nfirst is second";
}
void second(){
   cout << "\nsecond is third";
}
