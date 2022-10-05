// Question 
// 1. To write a 'C' program to create a singly linked list with 5 elements and display all the elements.


// CODE

#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int num;                        
    struct node *adr;           
}*stnode;

void createNodeList(int n); 
void print_list();        

int main()
{
    int n;
    printf("Enter the number of elements you want in the list ");
    scanf("%d", &n);
    createNodeList(n);
    printf("LINKED LIST : \n");
    printf("LINKED LIST : \n");
    print_list();
    return 0;
}

void createNodeList(int n)
{
    struct node *fnNode, *temp;
    int num, i;
    stnode = (struct node *)malloc(sizeof(struct node));

    if(stnode == NULL) 
    {
        printf(" No memory allocation ");
    }
    else
    {
        scanf("%d", &num);
        stnode->num = num;      
        stnode->adr = NULL; 
        temp = stnode;

        for(i=2; i<=n; i++)
        {
            fnNode = (struct node *)malloc(sizeof(struct node));
            if(fnNode == NULL)
            {
                printf("No memory allocation");
                break;
            }
            else
            {
                scanf(" %d", &num);
                fnNode->num = num;      
                fnNode->adr = NULL; 
                temp->adr = fnNode; 
                temp = temp->adr; 
            }
        }
    }
}

void print_list()
{
    struct node *temp1;
    if(stnode == NULL)
    {
        printf(" EMPTY LIST ");
    }
    else
    {
        temp1 = stnode;
        while(temp1 != NULL)
        {
            printf("%d\n", temp1->num);       
            temp1 = temp1->adr;                     
        }
    }
}