#include <stdio.h>

void squeeze(char s1[],char s2[]);

void main(){

	char s1[] = "This is a book.";
	char s2[] = "ibox";

	printf("org s1 : %s\n", s1);
	printf("org s2 : %s\n", s2);

	squeeze(s1,s2);

	printf("afr s1 : %s\n", s1);
	printf("afr s2 : %s\n", s2);




}

void squeeze(char s1[],char s2[]){

	int i, j, k;

	for ( i = k= 0; s1[i] != '\0'; i++)
	{
		for ( j = 0; s2[j] != '\0' && s2[j] != s1[i]; j++)
		{
			/* code */;
		}
		
		if (s2[j] == '\0')
		{
			s1[k++] = s1[i];
		}

		

		

	}

	s1[k] = '\0';



}