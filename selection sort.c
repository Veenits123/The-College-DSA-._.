void selection_sort(int a[],int n){
	int i,j;
	for (int i=0;i<n;i++){
		int min_index=i;
		for (int j=i+1;j<n;j++){
			if (a[j]<a[min_index]){
				min_index=j;
			}
		}
		swap(a[i],a[min_index]);
	}
}