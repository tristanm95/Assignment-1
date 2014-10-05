
/*
Qns PART 1. -- Add a Member function to the "Sphere" Class called getVolume()
			-- calculate the diameter of Sphere and Volume of The Sphere

----------
Qns PART 2  -- Create a new  derived class called  Cone and write member functions to  Overload getVolume()  and getLateralSurfaceArea() .
			-- Write a  constructor to initialize the Cone's private variables "radius" and "height" of the cone.
			
						
NOTE:-  Output should be written on 5 lines. Only print the Numbers and NOTHING ELSE
		First line :- Contains the Diameter of Sphere
		Second Line:- Contains the Volume of the Sphere 
		Third Line :- Contains the lateral Surface of the Sphere 
		Fourth Line :- Contains the Volume of the Cone 
		Fifth Line :- Contains the lateral Surface Area of the Cone 

NOTE :- Please use the following value for pi = 3.1416
*/
#include <iostream>    // using IO functions
#include <string>      // using string
#include <cmath>	   // using sqrt() functions


using namespace std;

const double pi = 3.1416; //Please use this value of pi in your calculations.


class Sphere {
private:
   double radius;      // Data member (Variable)
   string color;       // Data member (Variable)
   double volume;	   // Data member (Variable)

public:
   // Constructor with default values for data members
   Sphere(double r = 37.0, string c = "red") 
   {
      radius = r;
      color = c;
   }

   string getColor() {   // Member function (Accessor)
      return color;
   }
 
   double getLateralSurfaceArea() {    // Member function (Accessor)
      return 4*radius*radius*pi;
   }

   double getVolume() //Member Function (Accessor)
   {
	   volume = (4/3) * pi * (radius * radius * radius);
	   return volume;
   }
   
   double getRadius() // Member function (accesor)
   {
	   return radius;
   }

};   // need to end the class declaration with a semi-colon
 
class Cone
{
private:
	double radius;     // Data member (Variable)
	double height;     // Data member (Variable)
	double volume;     // Data member (Variable)
	double latSA;	   // Data Member (Variable)

public:
	Cone(double r = 5.4, double h = 3.8) //Constructor to set default values to data members
	{
		radius = r;
		height = h;
	}
	
	double getLatSurfaceArea() //Accessor Member Function - Calculate the Lateral Surface Area of the cone and return that value
	{
		latSA = pi * radius * sqrt((height * height) + (radius * radius));
		return latSA;
	}

	double getVolume() //Accessor Member Function - Calculate the Volume of the cone and return that value
	{
		volume = (1.0/3.0) * pi * (radius * radius) * height;
		return volume;
	}

	double getRadius()
	{
		return radius;
	}

};


// Test driver function
int main() {
	double diameterS = 0;
	double diameterC = 0;

   // Construct a Sphere instance
   Sphere c1(1.2, "blue");
   Cone c2(5.4, 3.8); //Construct a new Cone instance

   diameterC = c2.getRadius() * 2; // Calculate diameter of the Cone
   diameterS = c1.getRadius() * 2; // Calculate diameter of the Sphere (sphere.radius DOES NOT WORK, radius is a private member)

   cout << diameterS << endl;
   cout << c1.getVolume() << endl;
   cout << c1.getLateralSurfaceArea() << endl;
   cout << c2.getVolume() << endl;
   cout << c2.getLatSurfaceArea();

   return 0;
}
