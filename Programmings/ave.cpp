#include<iostream>
using namespace std;

double AVRG(int N1,int N2,int N3)
{

  int total;
  double ave;
  
  total = N1 + N2 + N3;
  ave = total/3;

  return ave;
}

int main()
{
	int n1, n2, n3;
	double average;
	
	cin >> n1 >> n2 >> n3;

	average = AVRG(n1, n2, n3);
	cout << average;
	return 0;
}
