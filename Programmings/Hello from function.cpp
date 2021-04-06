#include<iostream>
using namespace std;

void function(){
	cout << "Hello,main function\n";
}
int main(){
	cout << "Hello,funtion\n";
	function();
	cout << "Back to main again";
	return 0;
}
