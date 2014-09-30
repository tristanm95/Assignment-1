/*bubble sort algorithm */ 

//READ BUBBLE SORT ALGORITHM  Algorithm from wikipedia
/*
The code is almost correct but something is wrong in the code.
It is not doing what it is supposed to do. Read the Bubble Sort 
Algorithm and debug the code to print the correct output.

Also write the code for reading the numbers from the file "input.txt" 
provided in the folder "prob2" 
NOTE:- DONOT hasrdcode the size of the file . Create a constant variable  max_length = 200 which will be the maximum size of the file.
//---------------------------------------------------------------
NOTE: DO NOT ADD ANY COUT STATEMENTS IN THE FINAL SUBMISSION 
OF THE CODE. ALSO, DO NOT MODIFY THE SEQUENCE OF THE INPUT, OR 
CHANGE THE INPUT 
//---------------------------------------------------------------
*/

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <ostream>


using namespace std; 

const int MAX_LENGTH = 200; //Used only for error checking

void print_array(int array[], int size) 
{ 
	cout<< "bubble sort steps: "; 
	int j; 
	for (j=0; j<size;j++) 
		cout <<" "<< array[j]; 
	cout << endl;
}//end of print_array 

void bubble_sort(int arr[], int size) 
{ 
	bool not_sorted = true; 
	int j=1,tmp;   
	while (not_sorted)  
	{ 
		not_sorted = false; 
		j++; 
		for (int i = 0; i < size - 1; i++) //Size minus 1 b/c array starts at 0
		{ 
			if (arr[i] > arr[i + 1]) 
			{ 
				tmp = arr[i]; 
				arr[i] = arr[i + 1]; 
				arr[i + 1] = tmp; 
				not_sorted = true;     
			}//end of if   
			print_array(arr,size);  
		}//end of for loop 
	}//end of while loop
}//end of bubble_sort 
	
	
	int main() 
	{ 
		int placeholderSize = 0; //Used as the size of the numbers in the array
		int integerArray[MAX_LENGTH] = {'/0'};//initializes the array to a maximum length
		int i = 0;//index for the for loops
		fstream inputUnsorted;//instream function declaration

		inputUnsorted.open("input.txt");//open the input text

		if(inputUnsorted.fail())//Correct filetype and location check
		{
			exit(1);
		}

		if(inputUnsorted.eof())//Checks if file is empty
		{
			exit(2);
		}

		for(i = 0; i < MAX_LENGTH; i++) // Places numbers from the file into array integerArray
		{
			if(inputUnsorted.eof())//Breaks out of the for loop once the end of the file is reached
			{
				break;
			}
			inputUnsorted >> integerArray[i];
			placeholderSize++;// Adds one to the placeholderSize, to be used for the print_array() function
		}


		print_array(integerArray, placeholderSize); //prints the unsorted array
		bubble_sort(integerArray, placeholderSize); //sorts and prints the the array
		return 0;
	}//end of main