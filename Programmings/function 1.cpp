#include <iostream>
using namespace std;
// Function prototype
void showDouble(int); 

int main(){
  int num;
  for (num = 0; num < 20; num++)
   	showDouble(num);
   return 0;
}

//Definition of function 
void showDouble(int num) {
 cout<<num <<"\t";
 cout << (num * 3)<< endl;
} 

