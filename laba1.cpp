#include <iostream>
#include <cmath>
using namespace std;
int main(){

	double side1, side2; 
	double perim, square, diagonal;
	cin >> side1 >> side2; // вводим две стороны прямоугольника
	
	if (side1<=0 || side2<=0){ // защита 
		cout<< "ERROR!" <<endl;
		return 0;
	}

	perim = ( side1 + side2 ) * 2;
	square = side1 * side2;
	diagonal = sqrt( pow(side1, 2) + pow(side2, 2) );
	
	cout << "perimetr = " << perim << endl;
	cout << "square = " << square << endl;
	cout << "diagonal = " << diagonal << endl;

	return 0;

}

