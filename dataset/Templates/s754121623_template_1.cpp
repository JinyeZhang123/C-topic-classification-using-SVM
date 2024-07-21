template <typename T> void b_sort(T* a , int n){
	int i , j;
	for(i=n;i>=0;i--){
		for(j=0;j<n-1;j++){
			if(a[j]>a[j+1]){
				a[j]^=a[j+1];
				a[j+1]^=a[j];
				a[j]^=a[j+1];
			}