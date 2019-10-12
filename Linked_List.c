#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
int Nodes(struct node *);
void find(struct node*,int);
struct node * start=NULL;
struct node * create(struct node*);
struct node * display(struct node*);
struct node * last_node(struct node*,int);
struct node * random_position(struct node*,int,int);
struct node * beg_deletion(struct node*);
struct node * last_deletion(struct node*);
struct node * random_deletion(struct node*,int);
struct node *no_of_times_data_occurs(struct node *start,int x);
int main()
{
	int ch,length=0,x=0,pos=0;

	printf("press 1 to create a Linked List...\n");
	printf("press 2 to display all the data of Linked List\n");
	printf("Press 3 to find the length of the Nodes\n");
	printf("Press 4 to search the Element\n");
	printf("Press 5 to insert node at the last\n");
	printf("Press 6 to insert node at random position\n");
	printf("Press 7 to delete node from beginning\n");
	printf("Press 8 to delete node from the last\n");
	printf("Press 9 to delete random node from the List\n");
	printf("Press 10 to check no. of times a data occur..\n");
	printf("Press 11 to exit \n\n");
	do{
	printf("Enter your choice\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: start=create(start);
		         break;
		case 2:   start=display(start);
		         break; 
		case 3:  length=Nodes(start);
		           printf("Length of the node is %d\n ",length);
				   break;
	    case 4:  printf("Enter the element which you want to search\n");
		         scanf("%d",&x);
				 	find(start,x);
				 	break;
	    case 5:   printf("Enter the item that you want to insert in the new node\n");
		          scanf("%d",&x);
				  start=last_node(start,x);	
				   break;
		case 6:   printf("Enter the position , where you want to add node\n");
		          scanf("%d",&pos);
				  printf("Enter the data that you want to add\n");
				  scanf("%d",&x);
				  start=random_position(start,pos,x);
				  printf("successfully added..\n");
				    break;
		case 7:   start=beg_deletion(start);
		            printf("deletion succesfully...\n");
		            break;
	    case 8:   start=last_deletion(start);
		            printf("deletion succesfully..\n");
					break;
		case 9:    printf("Enter the position of node that you want to delete\n");
		            scanf("%d",&pos);
					start=random_deletion(start,pos);
					printf("successfully deleted..\n");
					break;	
		case 10:   printf("Enter the number that you want to check..\n");
		            scanf("%d",&x);
					start=no_of_times_data_occurs(start, x) ;
					break; 											  		  			 	   	     
		case 11:   exit(0);
		            break;
		default:    printf("Wrong choice....\n");
		            break;	
	}
} while(1);
	
}
     struct node * create(struct node *start)
     {
        int item;
        struct node *new_node;
        new_node=(struct node*)malloc(sizeof(struct node));
        printf("Enter the item that you want to add..\n");
        scanf("%d",&item);
    
        new_node->data=item;
        if(start == NULL)
        {
        	new_node->next=NULL;
        	start=new_node;
		}
		else{
			new_node->next=start;
			start=new_node;
		}
		return start;   
	 }
	 
	 struct node* display(struct node *start)
	 {
	 	struct node *ptr;
	 	ptr=(struct node *)malloc(sizeof(struct node));
	 	ptr=start;
	 	  while(ptr !=NULL)
	 	  {
	 	  	  printf("%d\n",ptr->data);
	 	  	  
	 	  	  ptr=ptr->next;
		   }
		  
		   return start;
	 }
	 
	    int Nodes(struct node *start)
	    { 
	        int count=0;
	    	struct node *current=start;
	    	while(current !=NULL)
	    	{
	    	    count++;
				current=current->next;	
			}
			return count;
		}
		
		void find(struct node *start,int x)
		{
			int flag=1;
			struct node *current = start;
			while(current->data ==x )
			{
				printf("true");
				flag=0;
				current=current->next;
			}
			if(flag==1)
			printf("false");	
		}
		
		struct node* last_node(struct node *start,int x)
		{
			struct node *tmp,*current;
			tmp=(struct node*)malloc(sizeof(struct node));
			while(current->next !=NULL)
			{
				current=current->next;
			}
			current->next=tmp;
			tmp->data=x;
			tmp->next=NULL;
			return start;
		}
	        struct node* random_position(struct node *start,int position,int x)
	        {
	        	struct node *new_node,*current,*ptr;
	        	int n=1;
	        	new_node=(struct node*)malloc(sizeof(struct node));
	        	current=start;
	        	if(position == 1)
	        	{
	        		 start->data = x;
	        		 new_node->next=start;
	        		 start=new_node;
	        		 return start;
				}
				
				while(current !=NULL && n!=position)
				{
					current=current->next;
					n++;
				}		
				new_node->data=x;
				new_node->next=current->next;
				current->next=new_node;
				return start;
			}
			
			struct node *beg_deletion(struct node *start)
			{
				struct node *ptr;
				ptr=start;
				start=start->next;
				free(ptr);
				return start;
			}
			
			struct node *last_deletion(struct node *start)
			{
				struct node *current=start,*ptr;
				
				while(current->next !=NULL)
				{
					ptr=current;
				 	current=current->next;
				}
				   ptr->next=NULL;
				   free(current);
			    return start;		
			}
			
		struct node *random_deletion(struct node *start,int position)
		{
			  int x=1;
			struct node *current=start,*ptr;
			
			while(current !=NULL && x!=position)
			{
				current=current->next;
				x++;
			}
			  ptr=current->next;
			  current->next=ptr->next;
			   free(ptr);
			   return start;
			}
			
			struct node *no_of_times_data_occurs(struct node *start,int x)
			{
				int count=0;
				struct node *current=start;
				
				while(current !=NULL)
				{
					if(current->data == x)
						count ++;
					current=current->next;
				}
				  printf("%d is occurs %d times\n",x,count);
				  return start;
			}
