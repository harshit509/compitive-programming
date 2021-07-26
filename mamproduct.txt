	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    // code here
	    
int i;
int max_product=1;
int min_product=1;
int ans=INT_MIN;
for(i=0;i<n;i++){
    if(arr[i]<0){
        swap(max_product,min_product);
    }
    
    max_product=max(arr[i]*max_product,arr[i]);
    min_product=min(arr[i]*min_product,arr[i]);
    
    if(arr[i]==0){
        max_product=1;
        min_product=1;
    }
    ans=max(ans,max_product);
}
	return ans;
	}
};