#include<stdio.h>
#include<string.h>
void main(){

char st[88];

printf("enter the string\n");
scanf("%[^\n]s",&st);

printf(" length os string is %d\n",strlen(st));
char nam[20];
printf("copy %s\n",strcpy(nam,st));
printf("contcatenate %s\n",strcat(nam,st));
printf("comparision is %d\n",strcmp(nam,st));
printf("uppercase %s\n",strupr(st));
printf("reverse %s\n",strrev(st));
printf("lowercase %s\n",strlwr(st));
}
