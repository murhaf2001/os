#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubble_sort(int a[], int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(a[j]>a[j+1])
				swap(&a[j],&a[j+1]);
		}
	}
}

int main(){
	int a[7] = {7,8,1,3,2,4,6};
	bubble_sort(a,7);
	for(int i=0;i<7;i++)
		printf("%d ",a[i]);
	puts("");
	return 0;
}
