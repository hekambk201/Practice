#include<iostream>
#include<cctype>
using namespace std;

int main()
{
	char ch;
	cout << "Write anything\n";
	cin.get(ch);
	
	if(isdigit(ch)) {
		cout.put(ch); 
		cout << "digit\n";
	}
	if(isalpha(ch)){
		cout.put(ch);
		cout << "letter\n"; 
	}
	else{
		cout << "spacial character";
	}
	return 0;
}
