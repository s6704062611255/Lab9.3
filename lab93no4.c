#include <stdio.h>
#define MAX 50
int countVowel(char [ ]);
void main() {
	char text[MAX];
	int cVowel;
	printf("Enter text : ");
	scanf(" %s", text);
	cVowel = countVowel(text);
	printf("Text : [%s] has %d vowels", text, cVowel);
}
int countVowel(char t[]) {
	int i=0, count=0 ,a=0,e=0,ii=0,o=0,u=0;
	while (i<MAX && t[i]!='\0') {
		if (t[i]=='A' || t[i]=='a' || t[i]=='E' || t[i]=='e' || t[i]=='I' || t[i]=='i' ||
			t[i]=='O' || t[i]=='o' || t[i]=='U' || t[i]=='u'){
			count++;
			if(t[i]=='A' || t[i]=='a'){
				a++;
			}
			else if(t[i]=='E' || t[i]=='e'){
				e++;
			}
			else if(t[i]=='I' || t[i]=='i'){
				ii++;
			}
			else if(t[i]=='O' || t[i]=='o'){
				o++;
			}
			else if(t[i]=='U' || t[i]=='u'){
				u++;
			}		
		}
		i++;	
	}
	printf("a = %d\n",a);
	printf("e = %d\n",e);
	printf("i = %d\n",ii);
	printf("o = %d\n",o);
	printf("u = %d\n",u);
	
	return (count);
}

