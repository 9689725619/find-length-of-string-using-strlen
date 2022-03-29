#include<stdio.h>
#include<string.h>
int main(){
	char a[20]="ashish";
	char b[20]={'a','s','h','i','s','h','\0'};
	char c[20];
	printf("enter string:");
	gets(c);
	printf("length of string a=%d\n",strlen(a));
	printf("length of string b=%d\n",strlen(b));
	printf("length of string c=%d\n",strlen(c));
	return 0;
}
