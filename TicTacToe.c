#include <stdio.h>

int Identify(char *ptr1, int *ptr2, int slotNum, char specialChar1, char specialChar2);
int winStatusCheck(char letter, char *username);
char slot1, slot2, slot3, slot4, slot5, slot6, slot7, slot8, slot9;
int winningFlag = 0;

int main()
{	
	char user1_name[50];
	char user2_name[50];
	int  user1_choice;
	int  user2_choice;

	printf("\nPlease enter user1's username (X user) : ");
	scanf("%[^\n]s", user1_name);
	printf("\nPlease enter user2's username (O user) : ");
	scanf(" %[^\n]s", user2_name);

	while(winningFlag == 0)
	{
		printf("\n[%s's turn]\tPlease enter the slot you desire to enter X in : ", user1_name);
		scanf("%d", &user1_choice);
		if(user1_choice == 1)
			Identify(&slot1, &user1_choice, 1, 'O', 'X');
		else if(user1_choice == 2)
			Identify(&slot2, &user1_choice, 2, 'O', 'X');
		else if(user1_choice == 3)
			Identify(&slot3, &user1_choice, 3, 'O', 'X');
		else if(user1_choice == 4)
			Identify(&slot4, &user1_choice, 4, 'O', 'X');
		else if(user1_choice == 5)
			Identify(&slot5, &user1_choice, 5, 'O', 'X');
		else if(user1_choice == 6)
			Identify(&slot6, &user1_choice, 6, 'O', 'X');
		else if(user1_choice == 7)
			Identify(&slot7, &user1_choice, 7, 'O', 'X');
		else if(user1_choice == 8)
			Identify(&slot8, &user1_choice, 8, 'O', 'X');
		else if(user1_choice == 9)
			Identify(&slot9, &user1_choice, 9, 'O', 'X');
		else {
			printf("The number you have chosen is invalid. Please enter a number between 1-9 and try again later\n");
			continue;
		}

		printf("\n[%s's turn] Please enter the slot you wish to enter O in   : ", user2_name);
		scanf(" %d", &user2_choice);
		if(user2_choice == 1)
			Identify(&slot1, &user2_choice, 1, 'X', 'O');
		else if(user2_choice == 2)
			Identify(&slot2, &user2_choice, 2, 'X', 'O');
		else if(user2_choice == 3)
			Identify(&slot3, &user2_choice, 3, 'X', 'O');
		else if(user2_choice == 4)
			Identify(&slot4, &user2_choice, 4, 'X', 'O');
		else if(user2_choice == 5)
			Identify(&slot5, &user2_choice, 5, 'X', 'O');
		else if(user2_choice == 6)
			Identify(&slot6, &user2_choice, 6, 'X', 'O');
		else if(user2_choice == 7)
			Identify(&slot7, &user2_choice, 7, 'X', 'O');
		else if(user2_choice == 8)
			Identify(&slot8, &user2_choice, 8, 'X', 'O');
		else if(user2_choice == 9)
			Identify(&slot9, &user2_choice, 9, 'X', 'O');
		else {
			printf("The number you have chosen is invalid. Please enter a number between 1-9 and try again later\nSYSTEM ERROR - QUITTING\n");
		}

			printf("\n\
			    |   |\n\
	   		  %c | %c | %c \n\
	        	____|___|____\n\
			    |   |\n\
			  %c | %c | %c \n\
	        	____|___|____\n\
			    |   |\n\
			  %c | %c | %c \n\
			    |   |\n", slot1, slot2, slot3, slot4, slot5, slot6, slot7, slot8, slot9);

		winStatusCheck('X', user1_name);
		winStatusCheck('O', user2_name);
	}
}

int Identify(char *ptr1, int *ptr2, int slotNum, char specialChar1, char specialChar2)
{	
	if(*ptr1 != specialChar1){
		*ptr1 = specialChar2;
	}
	while(*ptr1 == specialChar1){
		printf("Sorry but that slot is taken.\n");
		printf("\nPlease enter the slot you wish to enter %c in   : ", specialChar2);
		scanf(" %d", ptr2);
		if(*ptr2 != slotNum){
			if(*ptr2 == 1) slot1 = specialChar2;
			else if(*ptr2 == 2) slot2 = specialChar2;
			else if(*ptr2 == 3) slot3 = specialChar2;
			else if(*ptr2 == 4) slot4 = specialChar2;
			else if(*ptr2 == 5) slot5 = specialChar2;
			else if(*ptr2 == 6) slot6 = specialChar2;
			else if(*ptr2 == 7) slot7 = specialChar2;
			else if(*ptr2 == 8) slot8 = specialChar2;
			else if(*ptr2 == 9) slot9 = specialChar2;
			break;
		} else {
			continue;
		}
	}
	return 0;
}

int winStatusCheck(char letter, char username[])
{	
	if((slot1 == letter) && (slot2 == letter) && (slot3 == letter)){
		printf("\n%s Win's!", username);
		winningFlag = 1;
	} else if((slot4 == letter) && (slot5 == letter) && (slot6 == letter)){
		printf("\n%s Win's!", username);
		winningFlag = 1;
	} else if((slot7 == letter) && (slot8 == letter) && (slot9 == letter)){
		printf("\n%s Win's!", username);
		winningFlag = 1;
	} else if((slot1 == letter) && (slot4 == letter) && (slot7 == letter)){
		printf("\n%s Win's!", username);
		winningFlag = 1;
	} else if((slot2 == letter) && (slot5 == letter) && (slot8 == letter)){
		printf("\n%s Win's!", username);
		winningFlag = 1;
	} else if((slot3 == letter) && (slot6 == letter) && (slot9 == letter)){
		printf("\n%s Win's!", username);
		winningFlag = 1;
	} else if((slot3 == letter) && (slot5 == letter) && (slot7 == letter)){
		printf("\n%s Win's!", username);
		winningFlag = 1;
	} else if((slot1 == letter) && (slot5 == letter) && (slot9 == letter)){
		printf("\n%s Win's!", username);
		winningFlag = 1;
	} 
}