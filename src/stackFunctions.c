/*
 Name: Daniel Braimah.
 Student Number: 0845828.
 
 */

#include "stack.h"

/*
 Purpose: To display the Menu and get user input for the Stack ADT.
 
 Preconditions:none.
 
 Postconditions:From the options given user is able to select any and an int value based on your choice is returned to main.
 
 */

int displayMenu()
{
    int choice = 0;
    printf("\n\nWelcome to the STACK ADT TEST program. To begin please choose any of the following options\n");
    printf("1. Check if the stack is empty\n");
    printf("2. Check if the stack is full\n");
    printf("3. Push\n");
    printf("4. Pop\n");
    printf("5. Peek\n");
    printf("6. length or quanity of contents in the stack\n");
    printf("7. Display contents in the stack\n");
    printf("8. Quit program\n>>");
    scanf("%d", &choice);
    return choice;
}

/*
 Purpose: To determine whether the stack is full.
 
 Preconditions:none.
 
 Postconditions:Returns false because it cannot be full.
 
 */

bool isFull()
{
    return false;
}

/*
 Purpose: To determine whether the stack is empty.
 
 Preconditions: An initialized stack could exist to determine if its empty. Usually the stack is empty intially.
 
 Postconditions: Returns a bull value of true if the stack is empty other wise it will return false if not.
 
 */

bool isEmpty(stackData * theList)
{
    if(theList == NULL)
    {
	    return true;
    }
    else
    {
	    return false;
    }
}

/*
 Purpose: To Create and initialize stack.
 
 Preconditions: Takes in the nickName, classType and age from the user input to intialized the STACK ADT.
 
 Postconditions: A stack is created and initialized.
 
 */

stackData * createStack(char * nickName, char * classType, int age)
{
    stackData * stackPtr;
    stackPtr = malloc(sizeof(stackData));
    
    stackPtr->nickName = malloc(sizeof(char*)*strlen(nickName));
    stackPtr->classType = malloc(sizeof(char*)*strlen(classType));
    
    strncpy(stackPtr->nickName, nickName, strlen(nickName)+1);
    strncpy(stackPtr->classType, classType, strlen(classType)+1);
    stackPtr->age = age;
    
    return stackPtr;
}

/*
 Purpose: To remove the first element in the stack.
 
 Preconditions: The stack is not empty.
 
 Postconditions: The first (top) element of the stack is removed and returned to the caller.
 The top of the stack is set to the successor of the removed element,
 the length of the stack is decremented by one.
 
 */

stackData * pop(stackData *  theList)
{
    if(theList == NULL)
    {
        return NULL;
    }
    theList = theList->next;
    return(theList);
}

/*
 Purpose: To insert an element into the stack.
 
 Preconditions: The stack is not full.
 
 Postconditions: An element is added to the stack,the length is increased by one,
 the top of the stack points to the newly added element
 
 */


stackData * push(stackData * theList, stackData * toBeAdded)
{
    toBeAdded->next = theList;
    theList = toBeAdded;
    return(theList);
}

/*
 Purpose: To examine the element at the top of the stack without removing it from the stack.
 
 Preconditions: The stack is not empty.
 
 Postconditions: Returns the element that is at the top of the stack but does not remove that element from the stack.
 
 */


void peek(stackData * theList)
{
    stackData * temp;
    temp = theList;
    printf("\nNicknickName: %s\n", temp->nickName);
    printf("classType: %s\n",temp->classType);
    printf("Age: %d\n", temp->age);
    printf("\n");
}

/*
 Purpose: To destroy the data from the user input.
 
 Preconditions: An initialized stack exists.
 
 Postconditions:The data is destroyed and freed.
 
 */


void destroyRecord(stackData * temp)
{
    free(temp->nickName);
    free(temp->classType);
    free(temp);
}
/*
 Purpose: To destroy the entire stack.
 
 Preconditions: An initialized stack exists.
 
 Postconditions:The stack is destroyed and all memory is freed.
 
 */

void  destroyList(stackData * theList)
{
	stackData * temp;
    while(theList != NULL)
    {
	    temp = theList;
	    theList = temp->next;
	    destroyRecord(temp);
    }
}
/*
 Purpose: To display elements in the stack.
 
 Preconditions: An initialized stack exists.
 
 Postconditions:Prints out all the data in the stack.
 
 */

void printStack(stackData * temp)
{
	while(temp != NULL)
	{
	    printf("\nNicknickName: %s\n", temp->nickName);
	    printf("classType: %s\n",temp->classType);
	    printf("Age: %d\n", temp->age);
	    temp = temp-> next;
    }
    printf("\n");
}


/*  Purpose: To obtain a count of the number of elements currently in the stack.
 
    PreConditions: An initialized stack is available.
 
    PostConditions: returns the count of the number of elements.
 */

int length(stackData * theList)
{
	stackData * temp;
    temp = theList;
    int count = 0;
    
    while(temp != NULL)
    {
        temp = temp->next;
	    count++;
    }
    return count;
}





