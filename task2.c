/*
Q.2 Write a Program to check if a given number is divisible by both 3 & 5 or not using UDF.For example,
Input:
Enter any number: 15

Output:
The given number is divisible by both 3 & 5.

------------------------------------------

For example,
Input:
Enter any number: 10

Output:
The given number is not divisible by both 3 & 5.
*/

#include<stdio.h>
void dhruv(){
	int i;
		printf("enter any value : ");
		scanf("%d",&i);
		if(i%3==0 && i%5==0){
			printf("The given number is divisible by both 3 & 5.");
	}else{
		printf("The given number is not divisible by both 3 & 5.");
	}
}

void main(){
	
 dhruv();
 
}
