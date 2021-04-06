#include <iostream>
#include <cstring>
using namespace std;
int main()
{	char reply;
   char garment[]="overcoat";
   cout<<"Is it raining outside? Answer y/n\n";
   cin>>reply;
   if(reply=='y')
   	strcpy(garment,"raincoat");
  cout<<"before you go out today take your "<<garment;
    return 0;
}


