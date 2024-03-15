#include <iostream>

using namespace std;

int main(){
	
	double h, d1, d2 ,d, angle;
	
	cout << "Please Input height in inches: ";
	cin >> h;
	
	h = h/12;
	
	
	
	cout << "Please input distance below\n";
	cout << "Feet:  ";
	cin >>d1;
	
	cout << "Inches: ";
	cin >> d2;
	
	d = (d1 + d2)/12;
	
	cout << "Please input angle in degrees: ";
	cin >> angle;
	
	double height = h+(d*(h/d));
	
	cout << "the height of tree is: "<<height<<endl; 
}
