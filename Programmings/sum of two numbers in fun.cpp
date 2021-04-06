#include<iostream>
using namespace std;

int sum(int,int);

int main(){
	int n1,n2,Addition;
	
	cout << "Enter 1st number";
	cin >>n1;
	cout << "Enter 2nd number";
	cin >>n2;
	Addition=sum(n1,n2);
	cout << "Sum of "<< n1 << " and " <<n2<< " is "<<Addition;
	return 0;
	
}
int sum(int x1, int x2){
	int sum = x1 + x2;
	return sum;
}

