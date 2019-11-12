/******************************************************************************

                            Online C Compiler.
                
Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute
 it.

*******************************************************************************/

/**
 * Stack implementation using linked list in C language.
 
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <limits.h>     
struct stack 
{
    int id;
    int year;
    char author[20];
   
 char title[20];
    struct stack *next;
} *top;
bool data;
struct stack books;  
struct stack *head=NULL;
struct stack *ttop;
int size = 0;
/* 
Function declaration to perform push and pop on stack */
void push(books);
bool  pop();
void display();


int main()
{
    int choice;

    while(1)
   
 {
        /* Menu */
        printf("------------------------------------\n");
        printf("    STACK IMPLEMENTATION PROGRAM    \n");
       
 printf("------------------------------------\n");
    
    printf("Enter 1 for Push\n");
        
printf("Enter 2 for Pop\n");
       
 printf("Enter 3 for Size\n");
      
  printf("Enter 4 for DISPLAY\n");
        
printf("------------------------------------\n");
       
 scanf("%d", &choice);
  
      switch(choice) 
       
 {
            
case 1:
 
printf("Enter author,title,year_of_publication,id consecutively\n");
                
scanf("%s%s%d%d",&books.author,&books.title,&books.year,&books.id);

// Push element to stack
                
push( books);
                
break;

            
case 2: 
               
               
data= pop();
                
// If stack is not empty
                
break;

            
case 3: 
                
printf("Stack size: %d\n", size);
                
break;

            case 4: 
                
printf("display the items.\n");
                
display();
                break;

            
default: 
                
printf("Invalid choice, please try again.\n");
        
}

        printf("\n\n");
   
 }


   
 return 0;

}




/**
 * Function to push a new element in stack.
 
*/
void push( struct stack bk1 )

{
   
// Create a new node and push to stack
    
struct stack* newNode = (struct stack *) malloc(sizeof(struct stack));
        
head=newNode;
    // Assign data to new node in stack
    newNode->id = bk1.id;
   
strcpy(newNode->author,bk1.author); 
   strcpy(newNode->title,bk1.title); 
   
newNode->year = bk1.year;
   
// Next element after new node should be current top element
    
newNode->next = top;        

    
// Make sure new node is always at top
    top = newNode;

    
// Increase element count in stack
    size++;

    
printf("Data pushed to stack successfully.\n");


}


/**
 * Function to pop element from top of stack.
 */

bool pop()
{
    
struct stack *topNode;
    
    
// Check stack underflow
    
if (size <= 0 || !top)
   
 {
        
printf("Stack is empty.\n");
        
return false;
   
 }
    
ttop=top;
    
// Copy data from stack's top element
    
   
printf("a book with=>   id=%d\n\t\tEdition_year=%d\n\t\tauthor=%s\n\t\ttitle=%s\n is dropped out of stack.",top->id,top->year,top->author,top->title);
    
// Move top to its next element
    topNode = top;
    
top = top->next;
    
// Delete the previous top most stack element from memory
    
free(topNode);
   
    
// Decrement stack size
    size--;

    
return true;

}

void display(){
    
if(head==NULL)
    
printf("empty list");
    
else{
struct stack *temp=head;
int i=1;
while(temp!=NULL )
{
    if(temp->id!=0){
    printf("object %d:\n",i);
   
 printf("\tid=%d\n\tyear of publication=%d\n\tauthor of the book=%s\n\ttitle of the book=%s\n\t",temp->id,temp->year,temp->author,temp->title);
    
i++;
        
    }
    
temp=temp->next;
   
 
}

}

}