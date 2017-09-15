//Ryan Voigt
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <stdio.h>

using namespace std;
int main()
{
	cout << "Enter the length of each side of the triangle ";
	cout << "from shortest to longest" << endl;
	
	double SideA = 0;
	cin >> SideA;
	double SideB = 0;
	cin >> SideB;
	double SideC = 0;
	cin >> SideC;
	
	if ((SideA+SideB)>SideC){
		
		double CAngleC = acos(((pow(SideC,2)) - (pow(SideA,2) + pow(SideB,2))) 
		/ (-2*SideA*SideB))*(180/M_PI);
		
		double CAngleB=  acos(((pow(SideB,2))-(pow(SideA,2) + pow(SideC,2))) 
		/ (-2*SideA*SideC))*(180/M_PI);
		
		double CAngleA = 180 - CAngleB - CAngleC;
		
		cout << endl<< "Angles According to COS Law:" << endl;
		cout << "Angle A = " <<CAngleA;
		cout << "  Angle B = " <<CAngleB;
		cout << "  Angle C = " <<CAngleC<< endl << endl;
		
		double Per = 0;
		Per = (SideA + SideB + SideC)/2;
		
		double Area = 0;
		Area = sqrt(Per*(Per-SideA)*(Per-SideB)*(Per-SideC));
		
		double Height = 0;
		Height = (2*Area)/SideC;
		
		double SAngleA = asin(Height/SideB)*(180/M_PI);
		double SAngleB = asin(Height/SideA)*(180/M_PI);
		double SAngleC = 180 - SAngleB - SAngleA;
		
		
		cout << "Angles According to SIN Law:" << endl;
	
		cout << "Angle A = "   << SAngleA;
		cout << "  Angle B = " << SAngleB;
		cout << "  Angle C = " << SAngleC<<endl<<endl;
		cout << "Area = "<<Area<<" cm^2";	
	}else{
		cout << "You did not enter a valid triangle";
	}
}
