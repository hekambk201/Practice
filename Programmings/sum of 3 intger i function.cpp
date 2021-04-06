#include <iostream>
using namespace std;
void showSum(int, int, int, int);

int main()
{
	int value1, value2, value3,value4;

   cout<<"Enter 4 integers: ";
   cin>> value1 >> value2 >> value3 >> value4;
   showSum(value1, value2, value3, value4);
   
   return 0;
}

void showSum(int a, int b, int c,int d)
{
	cout<<"The sum: "<<a+b+c+d;
}

