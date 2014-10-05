/* Strict Requirement --- Enter Only Integer Data otherwise it will go into an infinite Loop */
/*
Concepts: The code contains the implementation of a "Singly link list ". 
If you do not understand what this is, check out chapter 13 in your text book
Questions (part 5):
1. In the main function, read the numbers from the file "input.txt" and insert 
the elements in the link list.
2. Write a member function that counts the number of nodes in the linked list.
3. Write a search function - the function should look for a number which the user 
gives and if it exists - DELETE it from the link list

Questions (part 6): 
1.Create a function called 'b_sort' and use bubble sort (learned in part 2) 
to sort the elements of the link list
*/
#include <iostream>
using namespace std;
#include <process.h>


//Singly linked list implementation 
class LinkList
{
	LinkList *next; //points to the next element
	int data; //the data stored in the current node
public:

	LinkList * ifirst(LinkList *);
	// ifirst function is used to enter the element at the beginning of the link list
	
	void traverse(LinkList *);
	//traverse funcion -- traverses the link list and prints the numbers in a link list from start(head) to end(tail)

	LinkList * ilast(LinkList *);
	// ilast inserts an element at the end of the link list . 

	void del(LinkList *);
	//delete function is used to delete an item from the link list.

	int numCount(LinkList *);
	//Counts the number of items in the linked list
};
// ifirst function is used to enter the element at the beginning of the link list
LinkList * LinkList::ifirst(LinkList *temp)
{
	LinkList *newlink;
	newlink=new LinkList;
	cout<<"\nEnter Data\n";
	cin>>newlink->data;
	newlink->next=temp;
	temp=newlink;
	return temp;
}

//Counts the number of items in the linked list
int LinkList::numCount(LinkList *temp)
{
	int listCount = 0;//Keeps count of the linked list items

	while (temp != NULL)
	{
		listCount++;
		temp = temp->next;
	}

	return listCount;
}

//traverse funcion -- traverses the link list and prints the numbers in a link list from start(head) to end(tail)
void LinkList::traverse(LinkList *temp)
{
	while(temp!=NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->next;
	}
	
}
// ilast inserts an element at the end of the link list . 
LinkList * LinkList::ilast(LinkList *temp)
{
	LinkList *newlink;
	newlink=new LinkList;
	if (temp==NULL)
	{                         //Look at the following two lines: Should you change them?
		LinkList *newlink;    //How does this relate to the above declaration?
		newlink=new LinkList; //What does this mean in terms memory allocation?
		cout<<"\nEnter Data :";
		cin>>newlink->data;
		newlink->next=temp;
		temp=newlink;		
	}
	else
	{
		LinkList *cur;
		cur=temp;
		while(cur->next!=NULL)
		{
			cur=cur->next;
		}
		cout<<"\nEnter Data :";
		cin>>newlink->data;
		newlink->next=NULL;
		cur->next=newlink;		
	}
	return temp;

}
void main()
{
	LinkList *first=NULL,l1;
	int choice;

	// The while loop below works. It is given to you to show you how to call a
	// function on your linked list.
	// Comment out the while loop below and write code to create a linked list 
	// using the numbers listed in a file input.txt (entered into the linked list 
	// in the order they are found in the file.
	// Remove the "//" comment signals from the code below in front of the 
	// '/*'  and  '*/' symbols to comment the code below and get started.
	/*  
	while(1)
	{
		cout<<"**************** LINK LIST (Only For Integer) ****************\n\n";
		cout<<"Choices Are :-\n=> [1] For Insert First\n=> [2] For Insert Last\n=> [3] For Traverse\n=> [4] For Exit";
		cout<<"\n\nEnter Your choice : ";
		cin>>choice;

		switch (choice)
		{
		case 1:
			first=l1.ifirst(first);
			break;
		case 2:
			first=l1.ilast(first);
			break;
		case 3:
			l1.traverse(first);
			break;
		case 4:
			exit(0);

		}

	
	}
	*/

	// INSERT YOUR CODE HERE

}



