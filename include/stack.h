/*
 Name: Daniel Braimah
 Student Number: 0845828
 
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 Purpose: To Create a stack ADT.
 
 Preconditions: none.
 
 Postconditions:The ADT is created
 
 */

typedef struct node{
	char * nickName;
	char * classType;
	int age;
	struct node * next;
    
}stackData;

/*
 Purpose: To Create a bool type to check if stack is empty or full.
 
 Preconditions: none.
 
 Postconditions:A bool type is created.
 
 */

#ifndef BOOL_DEF
#define BOOL_DEF

typedef int bool;
enum {false, true};
#endif


/*
 Purpose: To Create and initialize stack.
 
 Preconditions: Takes in the nickName, classType and age from the user input to intialized the STACK ADT.
 
 Postconditions: A stack is created and initialized.
 
 */


stackData * createStack(char * nickName, char * classType, int age);

/*
 Purpose: To remove the first element in the stack.
 
 Preconditions: The stack is not empty.
 
 Postconditions: The first (top) element of the stack is removed and returned to the caller.
 The top of the stack is set to the successor of the removed element,
 the length of the stack is decremented by one.
 
 */

stackData * pop(stackData *  theList);


/*
 Purpose: To insert an element into the stack.
 
 Preconditions: The stack is not full.
 
 Postconditions: An element is added to the stack,the length is increased by one,
 the top of the stack points to the newly added element
 
 */



stackData * push(stackData * theList, stackData * toBeAdded);



/*
 Purpose: To determine whether the stack is full.
 
 Preconditions:none.
 
 Postconditions:Returns false because it cannot be full.
 
 */



bool isFull();


/*
 Purpose: To examine the element at the top of the stack without removing it from the stack.
 
 Preconditions: The stack is not empty.
 
 Postconditions: Returns the element that is at the top of the stack but does not remove that element from the stack.
 
 */




void peek(stackData *  theList);


/*
 Purpose: To display the Menu and get user input for the Stack ADT.
 
 Preconditions:none.
 
 Postconditions:From the options given user is able to select any and an int value based on your choice is returned to main.
 
 */

int displayMenu();

/*
 Purpose: To destroy the data from the user input.
 
 Preconditions: An initialized stack exists.
 
 Postconditions:The data is destroyed and freed.
 
 */

void destroyRecord(stackData * temp);

/*
 Purpose: To destroy the entire stack.
 
 Preconditions: An initialized stack exists.
 
 Postconditions:The stack is destroyed and all memory is freed.
 
 */


void destroyList(stackData * theList);

/*
 Purpose: To display elements in the stack.
 
 Preconditions: An initialized stack exists.
 
 Postconditions:Prints out all the data in the stack.
 
 */


void printStack(stackData * temp);


/*
 Purpose: To determine whether the stack is empty.
 
 Preconditions: An initialized stack could exist to determine if its empty. Usually the stack is empty intially.
 
 Postconditions: Returns a bull value of true if the stack is empty other wise it will return false if not.
 
 */

bool isEmpty(stackData * theList);


/*  Purpose: To obtain a count of the number of elements currently in the stack.
 
 PreConditions: An initialized stack is available.
 
 PostConditions: returns the count of the number of elements.
 */

int length(stackData * theList);













