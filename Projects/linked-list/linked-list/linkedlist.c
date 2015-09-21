#include <stdio.h>
#include <stdlib.h>


struct node
{
 int data;
 struct node *next;
};


void addToStart (struct node** head)
{
	struct node *newNode;
	newNode = (struct node*)malloc(sizeof(struct node));
	printf("\nEnter data for this node: ");
	scanf_s("%d", &newNode->data);
	newNode->next = *head;
	*head = newNode; 
}

void addToEnd(struct node* head)
{
	struct node *newNode;
	struct node *temp;
	temp =(struct node*)malloc(sizeof(struct node));
	temp = head;
	while(temp->next != NULL) 
	{
		temp = temp->next;
	}
	newNode = (struct node*)malloc(sizeof(struct node));
	printf("\nEnter data for this node");
	scanf("%d", &newNode->data);
	newNode->next = NULL;
	temp->next = newNode ;
}
void DisplayAllNodes(struct node* head){
	struct node *temp;
	temp =(struct node*)malloc(sizeof(struct node));
	temp = head;
	while( temp!= NULL )
	{
 		printf("Data: %d \n", temp->data); // show the data
		temp = temp->next;
	}
	system("pause");
}
void DisplayLengthAllNodes(struct node* head){
	struct node *temp;
	int count=1;
	temp =(struct node*)malloc(sizeof(struct node));
	temp = head;
	while( temp!= NULL )
	{
		count++;
 		temp = temp->next;
	}
	printf("\n%d\n\n",count);
	system("pause");
}
void searchList(struct node *head, int num)
{
	struct node *temp;
	temp =(struct node*)malloc(sizeof(struct node)); temp = head;
	while( temp->next!= NULL )
	{
		if(temp->data == num)
		{
			printf("\nData Found.\n\n");
			system("pause");
			return;
		} 
		temp = temp->next;
	}
	printf("\nData not found\n\n");
	system("pause");
}
void deleteFromStart(struct node** head)
{
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp = *head;
	*head = temp->next;
	free(temp);
}
void deleteFromEnd(struct node* head)
{ 
	struct node* oldtemp;
	struct node *temp1;
	temp1 = (struct node*)malloc(sizeof(struct node));
	temp1 = head;
	oldtemp = (struct node*)malloc(sizeof(struct node));
	while(temp1->next!=NULL)
	{
		 oldtemp = temp1;
		temp1 = temp1->next;
	}
	oldtemp->next = NULL;
	free(temp1);
}

void swapping(struct node *a, struct node *b)
{
   int temp = a->data;
    a->data = b->data;
    b->data = temp;
}

void bubbleSort(struct node *start)
{
    int swapped, i;
    struct node *ptr1= (struct node *) malloc( sizeof(struct node) );
    struct node *lptr = NULL;

    if (ptr1 == NULL) return;
    do
    {
        swapped = 0;
        ptr1 = start;
 
        while (ptr1->next != lptr)
        {
            if (ptr1->data > ptr1->next->data)
            { 
                swapping(ptr1, ptr1->next);
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    }
    while (swapped);
}




main(){
	int d,sear;
	struct node *head;
	struct node *second;
	head= (struct node *) malloc( sizeof(struct node) );
	second= (struct node *) malloc( sizeof(struct node) );
	head->data = 5; 
	head->next = second;	
	second->data=6;
	second->next = NULL;

	do
	{
	
		printf("\nMENU\n");
		printf("1. Add a new node to the start of the list\n");
		printf("2. Add a new node to the end of the list \n");
		printf("3. Display all of the nodes in the list \n");
		printf("4. Display the length of the list \n");
		printf("5. Search the linked list for a data value\n");
		printf("6. delete a node to the start of the list\n");
		printf("7. delete a node to the end of the list \n");
		printf("8. sort the list \n");
		printf("9. exit\n");
		printf("enter the option you want to choose");
		scanf("%d",&d);
	
		switch(d){
		case 1:
			addToStart(&head);
			break;
		case 2:
			addToEnd(head);
			break;
		case 3:
			DisplayAllNodes(head);
			break;
		case 4:
			DisplayLengthAllNodes(head);
			break;
		case 5:
			printf("enter the value you want to search\n");
			scanf("%d",&sear);
			searchList(head, sear);
			break;
		case 6:
			deleteFromStart(&head);
			break;
		case 7:
			deleteFromEnd(head);
			break;
		case 8:
			bubbleSort(head);
			break;
		case 9:
			exit(0);
			break;
		default:
			break;
		}
	system("cls");
	}while(d!=9);
	system("pause");
}