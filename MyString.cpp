#include<iostream>
using namespace std;

/*
As discussed in lecture, something fishy is going on here. =)
Fix the Code :
*/

class MyString	{

private:
	char *value;
	int max_length;

public:
	int length() const;

	MyString(int size);
	MyString();
	MyString(const char a[]);
	MyString(const MyString& string_object); // Missing copy constructor
	~MyString(); //Destructor

	friend ostream& operator << (ostream& outs, const MyString& the_string);

	void input_line(istream& ins);
	void show_string(MyString the_string);

};

// Uses iostream
ostream& operator << (ostream& outs, const MyString& the_string)
{
	outs <<the_string.value;
	return outs;
}

void MyString::show_string(MyString the_string)
{
	cout << "the string is : "<<the_string<<endl;
}


void MyString::input_line(istream& ins) 
{
	ins.getline(value, max_length + 1);
}


int MyString::length() const
{
	return strlen(value);
}

MyString::MyString(const MyString& string_object):max_length(string_object.length()) // Missing copy constructor
{
	value = new char[max_length + 1];// + 1 is for the '\0'
	strcpy(value, string_object.value);
}

MyString::~MyString()
{
	delete [] value;
}


MyString::MyString(int size) : max_length(size)
{
	value = new  char[max_length + 1]; //+1 for \0
	value[0] = '\0';
}

MyString::MyString() : max_length(100)
{
	value = new  char[max_length + 1]; //+1 for \0
	value[0] = '\0';
}

MyString::MyString(const char a[]) : max_length(strlen(a) )
{
	value= new char[max_length+1];
	strcpy(value,a);
}

int main ()
{

	MyString greeting("Hello");
	greeting.show_string(greeting);
	cout<<"After Call: " <<greeting<<endl; // What is the Problem? 
                                           //Why is it not returning "Hello" ????
	return 0;
}
