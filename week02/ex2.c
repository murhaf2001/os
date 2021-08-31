#include <stdio.h>
#include <string.h>
#define N 200
char str[N];
char rstr[N];

int main()
{
	fgets(str,190,stdin);
	int n=strlen(str);
	for(int i=0,j=n-1;i<n;i++,j--){
		rstr[i] =  str[j];
	}
	puts(rstr);
	return 0;
}
