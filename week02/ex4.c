#include <stdio.h>

void swp(int &x,int &y)
{
	int temp = x;
	x = y;
	y = temp;
}

int main(){
	int x,y;
	scanf("plz enter two integers: %d%d\n",&x,&y);
	swp(x,y);
	printf("%d %d\n",x,y);

	return 0;
}
