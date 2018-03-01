#include<stdio.h>
#include<string.h>
int main(void) {
	char a[10];
	int i,s,c[10],k=0;
	scanf("%s",a);
	s=strlen(a);
	for(i=0;i<s;i++)
	{
	    if((a[i]>='0')&&(a[i]<='9'))
	    {
	    c[k]=a[i];
	    k++;
	    }
	}
	for(i=k;i>=0;i--)
	printf("%d",c[i]);
	return 0;
}
