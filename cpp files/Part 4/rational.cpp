//Objective:to practice operator-overloading
/*
This programming module is to get you to practice Overloading operators
Questions: Write member functions for Class Rational to define/overload the
     basic arithmetic operations   '+','-'.'*','/','!=','==','>','<' 


*/

#include <iostream>
using namespace std;

class Rational
{
private:
	int a;
	int b;
public:
	Rational(int=1,int=1);
	Rational(const Rational &nRat);
	void set_ab(int,int);
	void print_fraction();
    void print_floating();
	int getNominator();
	int getDenominator();

	friend Rational operator+(const Rational &nA, const Rational &nB);
	friend Rational operator-(const Rational &nA, const Rational &nB);
	friend Rational operator*(const Rational &nA, const Rational &nB);
	friend Rational operator/(const Rational &nA, const Rational &nB);

	void operator=(const Rational &nA);

	friend bool operator!=(const Rational &nA, const Rational &nB);
	friend bool operator==(const Rational &nA, const Rational &nB);
	friend bool operator>(const Rational &nA, const Rational &nB);
	friend bool operator<(const Rational &nA, const Rational &nB);

	friend ostream &operator<<(ostream &,Rational &);
	friend istream &operator>>(istream &,Rational &);
};


bool operator==(const Rational &nA, const Rational &nB)
{
	bool numBool = false;
	bool denumBool = false;

	if (nA.a == nA.b)
	{
		numBool = true;
	}
	else
	{
		numBool = false;
		return false;
	}

	if (nA.b == nB.b)
	{
		denumBool = true;
	}
	else
	{
		denumBool = false;
		return false;
	}

	if(numBool && denumBool)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operator!=(const Rational &nA, const Rational &nB)
{
	bool numBool = false;
	bool denumBool = false;

	if(nA.a != nB.a)
	{
		numBool = true;
	}
	else
	{
		numBool = false;
		return false;
	}

	if(nA.b != nB.b)
	{
		denumBool = true;
	}
	else
	{
		denumBool = false;
		return false;
	}

	if(numBool && denumBool)
	{
		return true;
	}

	else
	{
		return false;
	}
}


bool operator>(const Rational &nA, const Rational &nB)
{
	bool numBool = false;
	bool denumBool = false;
	
	if(nA.a > nB.a)
	{
		numBool = true;
	}
	else
	{
		return false;
	}
	
	if(nA.b > nB.b)
	{
		denumBool = true;
	}
	else
	{
		return false;
	}

	if(numBool && denumBool)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operator<(const Rational &nA, const Rational &nB)
{
	bool numBool = false;
	bool denumBool = false;

	if(nA.a < nB.b)
	{
		numBool = true;
	}
	else
	{
		return false;
	}

	if(nA.b < nB.b)
	{
		denumBool = true;
	}
	else
	{
		return false;
	}

	if(numBool && denumBool)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Rational::operator=(const Rational &nA)
{
	if(nA.a != a && nA.b != b)
	{
		a = nA.a;
		b = nA.b;
	}
}

Rational operator+(const Rational &nA, const Rational &nB)
{
	int num = 0;
	int denum = 0;

	num = (nA.a*nB.b) + (nB.a*nA.b);
	denum = (nA.b*nB.b);

	return(Rational(num, denum));
}

Rational operator-(const Rational &nA, const Rational &nB)
{
	int num = 0;
	int denum = 0;
	int temp = 0;

	num = (nA.a*nB.b) - (nB.a*nA.b);
	denum = (nA.b*nB.b);

	return(Rational(num, denum));
}

Rational operator*(const Rational &nA, const Rational &nB)
{
	int num = 0;
	int denum = 0;

	num = nA.a * nB.a;
	denum = nA.b * nB.b;

	return(Rational(num, denum));
}

Rational operator/(const Rational &nA, const Rational &nB)
{
	int num = 0;
	int denum = 0;

	num = nA.a * nB.b;
	denum = nA.b * nB.a;

	return(Rational(num, denum));
}

/*--------------------------------------------------------*/

Rational::Rational(int m,int n)
{
	set_ab(m,n);
}

/*--------------------------------------------------------*/

void Rational::set_ab(int x,int y)
{
	int temporary,m,n;
	m=x;
    n=y;
	if(n>m)
	{
		temporary=n;
		n=m;
		m=temporary;
	}
	while(m!=0 && n!=0)
	{
		if(m%n==0)
			break;
		temporary=m%n;
		m=n;
		n=temporary;
		continue;
	}
 	a=x/n;
	b=y/n;

}

/*--------------------------------------------------------*/

void Rational::print_fraction()
{
	cout<<a<<"/"<<b<<"=";
}

/*--------------------------------------------------------*/

void Rational::print_floating()
{
	cout<<(float)a/b<<endl;
}

/*--------------------------------------------------------*/


/*--------------------------------------------------------*/

ostream &operator<<(ostream &output,Rational &object)
{
	output<<object.a<<"/"<<object.b<<endl;
	return output;
}

/*--------------------------------------------------------*/

istream &operator>>(istream &input,Rational &object)
{
	cout<<"Enter numerator,denominator:"<<endl;
	input>>object.a;
	input>>object.b;
	return input;
}



/*--------------------------------------------------------*/

int main()
{
	Rational x(3,4),y(3,4),z1,z2,z3,z4;
	cout<<"x=";
	x.print_fraction();
	x.print_floating();
	cout<<"y=";
	y.print_fraction();
	y.print_floating();
	
	// Rational Number  k & l are of Class type Rational
	Rational k(1,1),l(1,1),z6,z7,z8,z9,z10;
	cin>>k>>l; // Input two Rational numbers k and l  , where k = 3/4 and l = 4/5
	if(k==l) // You need to define '==' operation for  this line to work
	{cout<<"These 2 fractions are equl."<<endl;}
	if(k!=l) // You need to define '!=' operation for  this line to work
	{cout<<"These 2 fractions are not equl."<<endl;}
    if(k>l) // You need to define '>' operation for  this line to work
	{cout<<"k is bigger than l."<<endl;}
	if(k<l) // You need to define '<' operation for  this line to work
	{cout<<"k is smaller than l."<<endl;}
	z6=k+l; // You need to define '+' operation for  this line to work
	z7=k-l; // You need to define '-' operation for  this line to work
	z8=k*l; // You need to define '*' operation for  this line to work
	z9=k/l; // You need to define '=' operation for  this line to work
	
	cout<<"z6="<<z6<<"z7="<<z7<<"z8="<<z8<<"z9="<<z9;
	cout<<"k="<<k<<"l="<<l;

	return(0);
}