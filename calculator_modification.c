#include<stdio.h>
#include<conio.h>
void addition();
void substraction();
void multiplication();
void division();
void modulus();
int a,b,c;

main()
{
	while(1)
	{
	
	int n;
	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>CALCULATOR<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n");
	printf("MADE BY JAYANT KUMAR\n\n");
	
	printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> press 1 for Addition<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
	printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> press 2 for substraction<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
	printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> press 3 for multiplication<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
	printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> press 4 for division<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
	printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> press 5 for modulation<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
	printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> press any key for exit<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
	scanf("%d",&n);
	switch(n)
	{
		case 1:  addition();
		         c=a+b;
		        break;
		case 2:  substraction();
		        break;
	    case 3:  multiplication();
		       break;
	    case 4:  division();
		       break;
	    case 5:  modulus();
		        break;
	   default: printf("wrong input");					   			        
	}
	
}

}
void addition()
{
	printf("enter the first number\n");
	printf("enter the second number\n");
	scanf("%d",&a);
	scanf("%d",&b);
	c=a+b;
	printf("The sum of first[%d] and second[%d] number is %d",a,b,c);
}

void substraction()
{
	printf("enter the first number\n");
	printf("enter the second number\n");
	scanf("%d",&a);
	scanf("%d",&b);
	c=a-b;
	printf("The substraction of first[%d] and second[%d] number is %d",a,b,c);
	
}

  void multiplication()
  {
  	printf("enter the first number \n");
  	printf("enter the second number \n");
  	scanf("%d",&a);
  	scanf("%d",&b);
  	c=a*b;
  	printf("The multiplication of first[%d] number and second [%d] number is %d",a,b,c);
  	
  }
  
   void division()
   {
   	 printf("enter the first number\n");
   	 printf("enter the second number\n");
   	 scanf("%d",&a);
   	 scanf("%d",&b);
   	 c=a/b;
   	 printf("The division of first[%d] number and second [%d] number is %d",a,b,c);
   	 
		
   }
   
    void modulus()
    {
    	printf("enter the first number\n");
    	printf("enter the second number\n");
    	scanf("%d",&a);
    	scanf("%d",&b);
    	c=a%b;
    	printf("The modulus of first[%d] number and second [%d] number is %d",a,b,c);
	}
