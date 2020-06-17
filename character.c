#include<stdio.h>
#include<ctype.h>

//A computer program receives a character input and if input is a letter, tells whether it is vowel of consonant. 
//Use int isalpha(int c) function from ctype.h library. 
//The argument c of the function is checked if it is a letter or not.

int main(){
	
	char x;
	
	printf("Please enter a character:");
	scanf(" %c",&x);
	
	if(isalpha(x)){
		if(x=='a'|| x=='e' || x=='ý'|| x=='u'|| x=='o' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U'){
			printf("VOWEL");
		}
		else{
			printf("CONSONANT");
		}
	}
	else{
		printf("NOT CHARACTER!!");
	}
	
	
	return 0;
}

