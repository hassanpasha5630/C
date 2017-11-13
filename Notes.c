#include<stdio.h>
#include<stdlib.h>


// This file is just a refresher to C as it has been a while since I have personally worked with C 

// Data types are listed below 

int int_ ; // this is declaring a interger varibale named number 

float float_ ; // this is a float as 1.0 || 9.3

double double_ ; // this can be seen double-precision floating point value.

char char_ ; // this is a char variable 

// void void_ ; //valueless 

// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------// 


// example of loop, int , and void function 

void LoopIntFunction(){

	// there are coulpe types of loops 
	/*For loops for(---){}
	  while (condtions){incrementor}
	  do{}while(condition)
	*/


	// for loop to print numbers from 1 - 10

	int i ; // in C we need to decalre variables as "i" outside of the for loop

	for (i = 0 ; i < 11 ; i ++){

		printf("%i\n",i); // in C we have printf("%type",variable)
	}

}
// baic recursion function 
void recursion(int i){

	// for recursion we need to set base cases 
	if (i  > 11){
		
		return ;
	}
	
	else{
		printf("%i\n",i);
		recursion(i+1);
	}
}

// we will use this to let the user ask to do a count for the resurssion 
int input_(){

    int a;
    printf("Please input an integer value: ");
    scanf("%d", &a);
    printf("You entered: %d\n", a);
    return a;

}


void string(){

   char str[500]; // in C we need to store a string in char arrays we can not store them in string as in python 
   int i;

   printf( "Welcome User what is your name");
   scanf("%s", str);

   printf( "\nGood Bye: %s \n ",str);
  
}

int main(){

 // main function where everything will be called this is not like python or higher PL it needs a main function.
 // the main function can not be under any function that it is called in it.

 LoopIntFunction(); // calling the loop function
 printf("staring recursion function \n");

 recursion(input_()); // recursion function
 string();
 //input_();

}