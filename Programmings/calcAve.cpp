#include <iostream>
using namespace std;

//definitions

//return-type Function_name (parameters)
double AVRG (int a, int b, int c)
{
	int total;  //local variables
	double ave;
	
	total = a+b+c; //function body
	ave = total/3.0;		//function body
	
	return ave;
}

int main()
{
	int n3;
	
	cout << "Key in the last number: ";
	cin >> n3;
	
	//function call
	cout << "\n\nThe average is " << AVRG (10, 5, n3);
	
	return 0;
}
