void bubble_sort(int a[], int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(a[j]>a[j+1])
				swap(&a[j],&a[j+1]);
		}
	}
}
