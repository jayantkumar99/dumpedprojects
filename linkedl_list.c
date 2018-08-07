struct node
{
	int info ;
	struct node *link;
	
};

struct node *emplist(struct node *start,int data);

main()
{
     struct node *start;
     int ch,data;
     while(1)
     {
     	printf("press 1.Insert in a empty list\n");
     	printf("enter choice\n");
     	scanf("%d",&ch);
     	switch(ch)
     	{
     		case 1:
     			
			 printf("enter element\n");
			 scanf("%d",&data);
			 start=emplist(start,data);
			 break;
			 case 6: exit(0);
		 }
	 }
}

struct node *emplist(struct node *start,int data)
{
	
	struct node *tmp;
	tmp=(struct node*)malloc(sizeof(struct node));
	tmp->link=start;
	tmp->info=data;
	start=tmp;
	return start;
}


