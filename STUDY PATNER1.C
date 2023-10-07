#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
void cal1(){
		int a,b,c;
	a;
	printf("enter the number\n");
	scanf("%d",&a);
	b;
	printf("enter the another value\n ");
	scanf("%d",&b);
	c = a+b;
	printf("the addition for the number you entered is %d\n\n",c);
	c = a-b;
	printf("the subraction for the number is%d\n\n\n",c);
	c = a*b;
	printf("the multiplication for the number you entered is%d\n\n\n",c);
	c = a/b;
	printf("the division for the number you entered is%d\n\n\n",c);
	c =a%b;
	printf("the moldule for the number you entered is%d\n\n\n",c);
	
}
void agefinder(){
		
	printf("=> now add 1 to your age \n\n\n=>now subract2 from your age \n\n\n=>now add 16 to your age\n\n\n");
	printf("=>enter the number you get\n\n ");
	int age;
	scanf("%d",&age);
	age=age-15;
	printf("your age is %d!!!!\n\n\n",age);
}
void leapyear(){
	int year;
	printf("=>NOW ENTER THE YEAR ______");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("=>YOUR YEAR IS A LEAP YEAR!!!!!\n\n=>THANKYOU FOR DOWLOADING THE APP\n\n=>THE APP FOR DEVELOPED BY 'DONAK <^>'");
		
		
	}
	else{
		printf("=>YOUR YEAR IS NOT A LEAP YEAR \n\n");
	}
	
	
	
}

void tables(){
		int num1,num2=1;
	printf("Enter the number  the table you want:");
	scanf("%d",&num1);
	table:
		printf("%d*%d=%d\n",num1,num2,num1*num2);
		num2++;
		if(num2<=16)
		goto table;
		
}
void cal2(){
		int A,B,C;
	printf("=> PLEASE ENTER THE NUMBER 1\n");
	scanf("%d",&A);
	printf("=> PLEASE ENTER THE NUMBER 2\n");
	scanf("%d",&B);
	C = A+B;
	printf("the addition is %d\n",C);
	C= A-B;
	printf("the subraction is %d\n",C);
	C= A*B;
	printf("the multiplication is %d\n",C);
	C = A/B;
	printf("the division is %d\n",C);
	C = A%B;
	printf("the module is %d\n",C);
	C = A++;
	printf("the increment of your  first number is%d\n",C);
	C = A--;
	printf("the decrement of your first number is %d\n",C);
	C = B++;
	printf("the increment of your second number is %d\n",C);
	C = B--;
	printf("the decrement of your second number is %d\n",C);
	C = A+A;
	printf("the addition of %d+%d=%d\n",A,A,A+A,C);
	C = B+B;
	printf("the addition of %d+%d=%d\n ",B,B,B+B,C);
	C = A*A;
	printf("the multiplication of %d*%d=%d\n",A,A,A*A,C);
	C = B*B;
	printf("the multiplication of %d*%d=%d\n",B,B,B*B,C);
	C =(A+B)*(A+B);
	printf("the solution of (%d+%d)*(%d+%d) = %d\n",A,B,A,B,C);
	C = (A-B)*(A-B);
	printf("the solution of (%d-%d)*(%d-%d) = %d\n",A,B,A,B,C);
	C = (A+A)*(A+A);
	printf("the solution of (%d+%d)*(%d+%d) = %d\n",A,A,A,A,C);
	C = (B+B)*(B+B);
	printf("the solution of (%d+%d)*(%d+%d) = %d\n",B,B,B,B,C);
	C = A/A;
	printf("the divison of %d/%d=%d\n",A,A,A/A,C);
	C = B/B;
	printf("the divison  of %d/%d=%d\n",B,B,B/B,C);
	C =(A+B)/(A+B);
	printf("the solution of (%d+%d)/(%d+%d) = %d\n",A,B,A,B,C);
	C = (A-B)/(A-B);
	printf("the solution of (%d-%d)/(%d-%d) = %d\n",A,B,A,B,C);
	C = (A+A)/(A+A);
	printf("the solution of (%d+%d)/(%d+%d) = %d\n",A,A,A,A,C);
	C = (B+B)/(B+B);
	printf("the solution of (%d+%d)/(%d+%d) = %d\n",B,B,B,B,C);
}
int main()
{
	char a[23],b[23],c[23],C[23],A[23];
	printf("enter your half name ");
	gets(a);
	printf("enter your remaing name");
	gets(b);
	strcat(a,b);
	printf("WELCOME %s TO STUDY PARTNER APP!!!\n\n\n",a);
	printf("_______________________________\n");
	printf("|        MATHMATICS            |\n");
	printf("|______________________________|\n");
    printf("_______________________________\n");
	printf("|        MORDERN-TABLES        |\n");
	printf("|______________________________|\n");
	printf("_______________________________\n");
	printf("|        GAMES                 |\n");
	printf("|______________________________|\n");
	
	printf("________________________________\n");
	printf("|TYPE THE CATOGERY YOU WANT:|   |\n");
	printf("|PLEASE TYPE IN CAPSLK!     |   |\n");
	printf("|___________________________|___|\t"); 
	scanf("%s",&c); 
	if(strcmp(c,"MATHMATICS")==0){
		system("color 32");
		
    printf("_______________________________\n");
	printf("|        CALCULATOR1           |\n");
	printf("|______________________________|\n");
    printf("_______________________________\n");
	printf("|        CALCULATOR2           |\n");
	printf("|______________________________|\n");
	printf("________________________________\n");
	printf("|TYPE THE CATOGERY YOU WANT:    |\n");
	printf("|PLEASE TYPE IN CAPSLK!         |\n");
	printf("|_______________________________|\t");	
	scanf("%s",&C);
	if(strcmp(C,"CALCULATOR1")==0){
		system("color 52");
		cal1();
		
	
		
	}	
	else{
		system("color 65");
		cal2();
		
	}}
	
	else if(strcmp(c,"MORDERN-TABLES")==0){
		system("color 84");
		tables();
		
			}
    else if(strcmp(c,"GAMES")==0){
    	
    system("color B4");	
    printf("_______________________________\n");
	printf("|  AGE-FINDER-GAME             |\n");
	printf("|______________________________|\n");
	printf("_______________________________\n");
	printf("|     NUMBER-SHIFTING-GAME     |\n");
	printf("|______________________________|\n");
	printf("_______________________________\n");
	printf("|     LEAP-YEAR-FINDER-GAME   |\n");
	printf("|______________________________|\n");
	char w[32],r[34];
	printf("________________________________\n");
	printf("|TYPE THE CATOGERY YOU WANT:    |\n");
	printf("|PLEASE TYPE IN CAPSLK!         |\n");
	printf("|_______________________________|\t");	
	scanf("%s",&w);
	if(strcmp(w,"AGE-FINDER-GAME")==0){
		system("color A4");
		agefinder();
    	}
    	else{
    		system("color C4");
    		leapyear();
		}
		}	
	 char An[324];
	 printf("if you want to continue the app(y/n):");
	 scanf("%s",&An);
	 if(strcmp(An,"y")==0){
	 		char a[23],b[23],c[23],C[23],A[23];
	printf("enter your half name ");
	gets(a);
	printf("enter your remaing name");
	gets(b);
	strcat(a,b);
	printf("WELCOME %s TO STUDY PARTNER APP!!!\n\n\n",a);
	printf("_______________________________\n");
	printf("|        MATHMATICS            |\n");
	printf("|______________________________|\n");
    printf("_______________________________\n");
	printf("|        MORDERN-TABLES        |\n");
	printf("|______________________________|\n");
	printf("_______________________________\n");
	printf("|        GAMES                 |\n");
	printf("|______________________________|\n");
	
	printf("________________________________\n");
	printf("|TYPE THE CATOGERY YOU WANT:|   |\n");
	printf("|PLEASE TYPE IN CAPSLK!     |   |\n");
	printf("|___________________________|___|\t"); 
	scanf("%s",&c); 
	if(strcmp(c,"MATHMATICS")==0){
		system("color 32");
		
    printf("_______________________________\n");
	printf("|        CALCULATOR1           |\n");
	printf("|______________________________|\n");
    printf("_______________________________\n");
	printf("|        CALCULATOR2           |\n");
	printf("|______________________________|\n");
	printf("________________________________\n");
	printf("|TYPE THE CATOGERY YOU WANT:    |\n");
	printf("|PLEASE TYPE IN CAPSLK!         |\n");
	printf("|_______________________________|\t");	
	scanf("%s",&C);
	if(strcmp(C,"CALCULATOR1")==0){
		system("color 52");
		cal1();
		
	
		
	}	
	else{
		system("color 65");
		cal2();
		
	}}
	
	else if(strcmp(c,"MORDERN-TABLES")==0){
		system("color 84");
		tables();
		
			}
    else if(strcmp(c,"GAMES")==0){
    	
    system("color B4");	
    printf("_______________________________\n");
	printf("|  AGE-FINDER-GAME             |\n");
	printf("|______________________________|\n");
	printf("_______________________________\n");
	printf("|     NUMBER-SHIFTING-GAME     |\n");
	printf("|______________________________|\n");
	printf("_______________________________\n");
	printf("|     LEAP-YEAR-FINDER-GAME   |\n");
	printf("|______________________________|\n");
	char w[32],r[34];
	printf("________________________________\n");
	printf("|TYPE THE CATOGERY YOU WANT:    |\n");
	printf("|PLEASE TYPE IN CAPSLK!         |\n");
	printf("|_______________________________|\t");	
	scanf("%s",&w);
	if(strcmp(w,"AGE-FINDER-GAME")==0){
		system("color A4");
		agefinder();
    	}
    	else{
    		system("color C4");
    		leapyear();
		}
		}	
	 }
	 else{
	 	return 0;
	 }
	  char n[324];
	 printf("if you want to continue the app(y/n):");
	 scanf("%s",&n);
	 if(strcmp(n,"y")==0){
	 		char a[23],b[23],c[23],C[23],A[23];
	printf("enter your half name ");
	gets(a);
	printf("enter your remaing name");
	gets(b);
	strcat(a,b);
	printf("WELCOME %s TO STUDY PARTNER APP!!!\n\n\n",a);
	printf("_______________________________\n");
	printf("|        MATHMATICS            |\n");
	printf("|______________________________|\n");
    printf("_______________________________\n");
	printf("|        MORDERN-TABLES        |\n");
	printf("|______________________________|\n");
	printf("_______________________________\n");
	printf("|        GAMES                 |\n");
	printf("|______________________________|\n");
	
	printf("________________________________\n");
	printf("|TYPE THE CATOGERY YOU WANT:|   |\n");
	printf("|PLEASE TYPE IN CAPSLK!     |   |\n");
	printf("|___________________________|___|\t"); 
	scanf("%s",&c); 
	if(strcmp(c,"MATHMATICS")==0){
		system("color 32");
		
    printf("_______________________________\n");
	printf("|        CALCULATOR1           |\n");
	printf("|______________________________|\n");
    printf("_______________________________\n");
	printf("|        CALCULATOR2           |\n");
	printf("|______________________________|\n");
	printf("________________________________\n");
	printf("|TYPE THE CATOGERY YOU WANT:    |\n");
	printf("|PLEASE TYPE IN CAPSLK!         |\n");
	printf("|_______________________________|\t");	
	scanf("%s",&C);
	if(strcmp(C,"CALCULATOR1")==0){
		system("color 52");
		cal1();
		
	
		
	}	
	else{
		system("color 65");
		cal2();
		
	}}
	
	else if(strcmp(c,"MORDERN-TABLES")==0){
		system("color 84");
		tables();
		
			}
    else if(strcmp(c,"GAMES")==0){
    	
    system("color B4");	
    printf("_______________________________\n");
	printf("|  AGE-FINDER-GAME             |\n");
	printf("|______________________________|\n");
	printf("_______________________________\n");
	printf("|     NUMBER-SHIFTING-GAME     |\n");
	printf("|______________________________|\n");
	printf("_______________________________\n");
	printf("|     LEAP-YEAR-FINDER-GAME   |\n");
	printf("|______________________________|\n");
	char w[32],r[34];
	printf("________________________________\n");
	printf("|TYPE THE CATOGERY YOU WANT:    |\n");
	printf("|PLEASE TYPE IN CAPSLK!         |\n");
	printf("|_______________________________|\t");	
	scanf("%s",&w);
	if(strcmp(w,"AGE-FINDER-GAME")==0){
		system("color A4");
		agefinder();
    	}
    	else{
    		system("color C4");
    		leapyear();
		}
		}	
	 }
	 else{
	 	return 0;
	 }
	 char on[324];
	 printf("if you want to continue the app(y/n):");
	 scanf("%s",&on);
	 if(strcmp(on,"y")==0){
	 		char a[23],b[23],c[23],C[23],A[23];
	printf("enter your half name ");
	gets(a);
	printf("enter your remaing name");
	gets(b);
	strcat(a,b);
	printf("WELCOME %s TO STUDY PARTNER APP!!!\n\n\n",a);
	printf("_______________________________\n");
	printf("|        MATHMATICS            |\n");
	printf("|______________________________|\n");
    printf("_______________________________\n");
	printf("|        MORDERN-TABLES        |\n");
	printf("|______________________________|\n");
	printf("_______________________________\n");
	printf("|        GAMES                 |\n");
	printf("|______________________________|\n");
	
	printf("________________________________\n");
	printf("|TYPE THE CATOGERY YOU WANT:|   |\n");
	printf("|PLEASE TYPE IN CAPSLK!     |   |\n");
	printf("|___________________________|___|\t"); 
	scanf("%s",&c); 
	if(strcmp(c,"MATHMATICS")==0){
		system("color 32");
		
    printf("_______________________________\n");
	printf("|        CALCULATOR1           |\n");
	printf("|______________________________|\n");
    printf("_______________________________\n");
	printf("|        CALCULATOR2           |\n");
	printf("|______________________________|\n");
	printf("________________________________\n");
	printf("|TYPE THE CATOGERY YOU WANT:    |\n");
	printf("|PLEASE TYPE IN CAPSLK!         |\n");
	printf("|_______________________________|\t");	
	scanf("%s",&C);
	if(strcmp(C,"CALCULATOR1")==0){
		system("color 52");
		cal1();
		
	
		
	}	
	else{
		system("color 65");
		cal2();
		
	}}
	
	else if(strcmp(c,"MORDERN-TABLES")==0){
		system("color 84");
		tables();
		
			}
    else if(strcmp(c,"GAMES")==0){
    	
    system("color B4");	
    printf("_______________________________\n");
	printf("|  AGE-FINDER-GAME             |\n");
	printf("|______________________________|\n");
	printf("_______________________________\n");
	printf("|     NUMBER-SHIFTING-GAME     |\n");
	printf("|______________________________|\n");
	printf("_______________________________\n");
	printf("|     LEAP-YEAR-FINDER-GAME   |\n");
	printf("|______________________________|\n");
	char w[32],r[34];
	printf("________________________________\n");
	printf("|TYPE THE CATOGERY YOU WANT:    |\n");
	printf("|PLEASE TYPE IN CAPSLK!         |\n");
	printf("|_______________________________|\t");	
	scanf("%s",&w);
	if(strcmp(w,"AGE-FINDER-GAME")==0){
		system("color A4");
		agefinder();
    	}
    	else{
    		system("color C4");
    		leapyear();
		}
		}	
	 }
	 else{
	 	return 0;
	 }	
	              
}