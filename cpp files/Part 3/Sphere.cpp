
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

const float pi = 3.1416; //Please use this value of pi in your calculations.

class Cone
{
private:
	double radius;     // Data member (Variable)
	double height;     // Data member (Variable)
	double volume;     // Data member (Variable)
	double latSA;	   // Data Member (Variable)
	double diameter;   // Data Member (Variable)
	
public:
	Cone(double r = 5.4, double h = 3.8) //Constructor to set default values to data members
	{
		radius = 5.4;
		height = 3.8;
	}
	
	double getLatSurfaceArea()
	{
		latSA = pi * radius * sqrt((height * height) + (radius * radius));
		return latSA;
	}

	double getVolume()
	{
		volume = (1/3) * pi * (radius * radius) * height;
	}

}
class Sphere {
private:
   double radius;      // Data member (Variable)
   string color;       // Data member (Variable)
   double volume;	   // Data member (Variable)
   double diameter;    // Data Member (Variable)

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
   
   double getDiameter() // Member function (accesor)
   {
	   diameter = 2 * radius;
	   return diameter;
   }

};   // need to end the class declaration with a semi-colon
 

/////////////////////////////

/* Create a new class called Cone  HERE   */

////////////////////////////



// Test driver function
int main() {
   // Construct a Sphere instance
   Sphere c1(1.2, "blue");
   cout << " Area=" << c1.getLateralSurfaceArea()
        << " Color=" << c1.getColor() << endl;

   // Create a new Object  of Type Class Cone and initialize it with radius = 5.4 and height = 3.8
   // Cone c2(5.4,3.8);
   // where  radius of cone = 5.4
   // height of cone = 3.8
	//-------------------------------------------------
	// INSERT CODE HERE  TO CALCULATE THE DIAMETER OF THE Sphere-----

    //---  Try Sphere.radius    
    //---  Does it work ???

	//--------------------------------------------------


   	//-------------------------------------------------
	// INSERT CODE HERE  
   
	// CALL THE MEMBER FUNCTIONS CREATED EARLIER to print the output of Lateral surface area  and VOLUME of a SPHERE and CONE-----

	//--------------------------------------------------
   return 0;
}
