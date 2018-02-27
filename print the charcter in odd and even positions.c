#include <stdio.h>
#include<string.h>
int main(void){
	char a[50];
	int i,l;
	scanf("%s",a);
	l=strlen(a);
	printf("%d",l);
	for(i=1;i<=l;i++)
	{
		if(i%2==0){
		printf("%c",a[i]);}
		else
		{printf("\n%c",a[i]);}
	}
	return 0;
}
