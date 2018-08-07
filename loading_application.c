#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<ctype.h>
void loader();
main()
 {
 	loader();
 	system("cls");
 	printf("\n\nCONTENT LODED SUCESSFULLY\n\n");
 	return 0;
 	
 }
 
 void loader()
 {
 	int i;
 	system("cls");
 	printf("\nPLEASE WAIT LOADING.....\n\n");
 	for(i=0;i<=50;i++)
 	{
 		sleep(1);
 		printf("%c",219);
	 }
 }
