#include<iostream>
#include<iomanip>
#include<cmath>
#include<math.h> 
#define PIE 3.142
using namespace std;

int main()
{
	int n;
	double  perimeter,x;
	double cost;
	double l1, w1,l2,w2,l3,w3;
	cout << " We have developed an application for the construction of patio for your garden.";
	cout << " Please select from one of the above designs to find out your estimated cost for fencing your patio ";
	cout << " Enter your choice either 1, 2, 3 or 4 ";		  
	 	 
	      cout << " \n1) Design 1 " ;
	      cout << " \n2) Design 2 " ;
	      cout << " \n3) Design 3 " ;
	      cout << " \n4) Exit\n " ;
	      cin >> n;
	      

	if(n==1)
	 { 	 
	    cout << "\nEnter the length for the design (in meter)" << l1;
		cin >> l1;
		cout << " \nEnter the width for the design (in meter)" << w1;
		cin >> w1;
		perimeter = (2*l1)+w1+(PIE*w1);
		cost = perimeter * 28.50;
		cout << "\nEstimated fencing cost is RM28.50 per meter";
		cout << "\nFencing perimeter : " << perimeter << " meters";
		cout << " \nTotal fencing cost : RM " << cost << endl; 
		
     }
	 else if(n==2)
	 { 
        		cout << "\nEnter the length for the design (in meter)" << l2;
		cin >> l2;
		cout << " \nEnter the width for the design (in meter)" << w2;
		cin >> w2;
		x = pow(l2,2)+pow(w2,2);
		perimeter = sqrt(x)+(PIE*w2)+l2;
		cost = perimeter * 28.50;
		cout << "\nEstimated fencing cost is RM28.50 per meter";
		cout << "\nFencing perimeter : " << perimeter << " meters";
		cout << " \nTotal fencing cost : RM " << cost << endl; 
		
	 }
	 else if(n==3)
	 {
        		cout << "\nEnter the length for the design (in meter)" << l3;
		cin >> l3;
		cout << " \nEnter the width for the design (in meter)" << w3;
		cin >> w3;
		perimeter = (2*l3)+w3+(PIE*w3);
		cost = perimeter * 28.50;
		cout << "\nEstimated fencing cost is RM28.50 per meter";
		cout << "\nFencing perimeter : " << perimeter << " meters";
		cout << " \nTotal fencing cost : RM " << cost << endl; 
		
	 }
	   else if(n==4)
	   {
	        cout << " \nYou have dicided to exit. Thank you for using this application.  ";
	   }
	   
	   	if(0<=n<4)
      {
	 	cout << " Invalid number ";	      
      }
	 return 0;
	
}
