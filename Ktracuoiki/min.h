int min(int arr[],int n){
	int Min=arr[0];
	for(int i=0; i<n;i++){
		if(arr[i]<=Min){
			Min=arr[i];
		}
	}
	return Min;
}
