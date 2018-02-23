#include <stdio.h>

int main(void) {
	// your code goes here
    char ch;
    int isLc,isUc;
    scanf("%c",&ch);
    isLc = (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
    isUc = (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
    if(isLc||isUc)
    {
    	printf("Vowel");
    }
    else
    {
    	printf("Consonant");
    }
	return 0;
}
