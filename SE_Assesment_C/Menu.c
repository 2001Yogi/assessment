
#include<stdio.h>
int choose(int choice){
	int num1,num2,add=0,sub=0,mul=0,div=0;
	printf("Enter the first Number:- ");
	scanf("%d",&num1);
	printf("Enter the Second Number:- ");
	scanf("%d",&num2);
	if(choice==1){
		add = num1+num2;
		printf("The addition of %d and %d is %d",num1,num2,add);
	}
	else if(choice==2){
		sub = num1-num2;
		printf("The subtraction of %d and %d is %d",num1,num2,sub);
	}
	else if(choice==3){
		mul = num1*num2;
		printf("The multiplication of %d and %d is %d",num1,num2,mul);
	}
	else if(choice==4){
		div = num1/num2;
		printf("The division of %d and %d is %d",num1,num2,div);
	}
	else{
		printf("Invalid Choice");
	}	
}
int main(){
	int choice;
	printf("========Menu==========\n");
	printf("1.Addition\n");
	printf("2.Subtraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	printf("Enter Your Choice:-");
	scanf("%d",&choice);
	choose(choice);
}
