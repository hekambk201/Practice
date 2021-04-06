#include <iostream>
#include <cctype>
using namespace std;
int main()
{  char ch;
   do{
      cout<<"Enter any character: ";

   		cin.get(ch);
   if (isdigit(ch)){
		cout<<"\ndigit";}
   else 
   if ( isalpha(ch))
   		cout<<"\nLetter";
   else 
   		cout<<"\nSpecial character";
   		cout << "\n\n";
   	cin.ignore();
  	} while (ch != '0');
   return 0;
}


    
