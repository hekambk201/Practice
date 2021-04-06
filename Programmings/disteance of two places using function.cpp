#include <iostream>
#include <cmath>
using namespace std;

float distance(float x, float y) 
{    float dist; 
     dist = sqrt(x * x + y * y);    
     return dist; 
 }

int main()
{
    float x,y,dist; 
cout << "Testing function distance(x,y)"  << endl;  
cout << "Enter values for x and y: ";  
cin >> x >> y;  
dist = distance(x, y);  
cout << "Distance of (" << x << ',' << y << ") from origin is " << dist << endl << "Tested" << endl;  
return 0;
}

