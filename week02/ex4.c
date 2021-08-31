#include <stdio.h>

void swp(int *a,int *b)
{
        int tmp = *a;
        *a = *b;
        *b = tmp;
}

int main(){
        int x,y;
        scanf("%d %d",&x,&y);
        swp(&x,&y);
        printf("%d %d\n",x,y);

        return 0;
}
