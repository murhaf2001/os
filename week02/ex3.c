#include <stdio.h>


int main(int argc,char **argv){
	int n;
	sscanf(argv[1],"%d",&n);
//	printf("%d\n",n);
	for(int i=1;i<=n;i++){
		for(int j=0;j<n-i;j++)
				putchar(' ');
		for(int j=0;j<i*2-1;j++)
				putchar('*');
		puts("");
	}
	return 0;
}
