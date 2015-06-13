/*
 Name: Daniel Braimah
 Student Number: 0845828
 
 */

#include "stack.h"


int main(int argc, char ** argv)
{
    char nickName[100];
    char classType[100];
    int age;
    int choice = 0;
    stackData * head;
    stackData * new;
    int listCounter;
    
    do
    {
        choice = displayMenu();
	    if(choice == 1)
	    {
		    if(isEmpty(head) == true)
		    {
		        printf("\nThe stack is currently empty\n");
		    }
		    else
		    {
			    printf("\nThere are some elements in the stack\n");
		    }
	    }
	    else if(choice == 2)
	    {
		    if(isFull() == false)
		    {
			    printf("\nIn theory a linked list representation of a stack cannot be full. Unless you run out memory\n");
		    }
	    }
	    else if(choice == 3)
	    {
		    printf("Please enter your nickName: ");
		    scanf("%s",nickName);
		    printf("Please enter a classType a, b or c: ");
		    scanf("%s", classType);
		    printf("Please enter your age: ");
		    scanf("%d", &age);
            
            if(head == NULL)
            {
                head = createStack(nickName, classType, age);
                listCounter = length(head);
            }
            else
		    {
			    new = createStack(nickName,classType,age);
			    head = push(head,new);
			    listCounter = length(head);
			}
	    }
	    else if(choice == 4)
	    {
		    head = pop(head);
		    listCounter--;
	    }
	    else if(choice == 5)
	    {
		    peek(head);
	    }
	    else if(choice == 6)
	    {
		    printf("\nThe number of element(s) in the stack is %d\n", listCounter);
	    }
	    else if(choice == 7)
	    {
		    printf("\n  <---- TOP of the stack ----->\n");
		    printStack(head);
	    }
	    else if(choice == 8)
	    {
		    printf("\nThank you for using this STACK ADT TEST program. Have a good day\n");
	    }
	    else
	    {
		    printf("\nINAVLID INPUT.\n");
		    printf("Please choose the correct options from the menu\n");
	    }
        
    }while(choice != 8);
    destroyList(head);
    fflush(stdin);

    return 0;
}
