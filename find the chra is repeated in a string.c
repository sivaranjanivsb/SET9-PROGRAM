#include <stdio.h>
#include<string.h>
int main(void){
	char a[50];
	int s,i,c=0;
	scanf("%s",a);
	s=strlen(a);
	printf("%d",s);
	for(i=0;i<=s;i++)
	{
	    if(a[i]==a[i])
	    {
	        c++;
	    }
	   
	}
	if(c==0){
	printf("yes");}
	else{
	printf("no");}
	return 0;
}
