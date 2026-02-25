#include <stdio.h>
#include<stdlib.h>
int checkLogin(char *login, char *passwd, char *logindb, char *passdb); 
int main() {
	char login[5][64]={"user1","user2","user3","user4","user5"};
	char password[5][64]={"pass1","pass2","pass3","pass4","pass5"};
	//implement here
	char input_login[5][64];
	char input_passwd[5][64];
	int i,found = 0;
	
	printf("Input Login: ");
	scanf("%63s",input_login);
	printf("Input password: ");
	scanf("%63s",input_passwd);
	for(i=0;i<5;i++){
		if(checkLogin(input_login, input_passwd, login[i], password[i])){
			found = 1;
			break;
		}
			
	}
	if(found == 1){
		printf("Welcome\n");
	}
	else{
		printf("Incorrect login or password\n");
	}		
}

int checkLogin(char *login, char *passwd, char *logindb, char *passdb){
	int i;
	for(i=0;i<5;i++){
		if(strcmp(login,logindb)==0 && strcmp(passwd,passdb)==0){
			return 1;
		}
		else{
			return 0;
		}
	}
}

