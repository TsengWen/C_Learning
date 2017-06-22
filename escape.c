#include <stdio.h>

void escape(char s[], char t[]);


void main(){

	char t[] = "This\tis\ta\tbook.\n";
	char s[100];

	printf("orgin : %s\n",t );
	escape(s ,t);
	printf("after : %s\n",s );




} 


void escape(char s[], char t[]){

	int i, j;

	for ( i = j = 0; t[i] != '\0'; i++){
		switch(t[i]){
			case '\n' :
				s[j++] = '\\';
				s[j++] = 'n';
				break;
			case '\t' :
				s[j++] = '\\';
				s[j++] = 't';
				break;
			default :
				s[j++] = t[i];
				break;		
		}

		s[j] = '\0';
	}

}
		

		




