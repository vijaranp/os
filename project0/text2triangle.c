/*
Phu Vijaranakorn
CS3430 Operating Systems
Project0
1/23/2019
*/

#include<string.h>
#include <stdio.h>
#include<ctype.h>
#include<stdbool.h>
#include<stdlib.h>

char ch[80];
int count = 0;
int c=0;
int length;



/*This function is checking all char and remove spaces.*/
char * remove_spaces(char * ch){ 

	for(int i=0;ch[i];i++){

		if(ch[i]!=' '){
	
			ch[count]=ch[i];
			count++;
		}
	}
	ch[count]='\0';

	return ch;

}

/*This function takes output from remove_spaces and print all char as triangle.*/
void generate(char * ch){
	
	length = strlen(ch);

	for(int row=1; row<length; row++){

		if(c==length){
		break;
		}

		for(int col=1; col<row; col++){

			if(c==length){
				break;
			}
			printf("%c",ch[c]);
			c++;
		}

	printf("\n");
	}
}

/*This is a main that a part that calls all function.*/

int main(void){
	
	char* sent;
	
	while(1){
	 	
		count = 0;
		c=0;
		

		printf("Please enter the sentence or quit: ");
		fgets(ch,80,stdin);

		if (strcmp(ch,"quit\n") == 0){
     			printf("%s","Exiting!\n");
      			break;
    		}
		
		sent = remove_spaces(ch);	
		generate(sent);	
	}
	
	return 0;
}


