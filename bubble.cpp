//so we need to sort this array using bubble sort
//bubble sort->in this we check with the adjacent element so

//4 with 5
//so array become 4,5,3,21,6
// then 5 with 3 
//so array become 4,5,3,21,6
//NOW 3 with 21
//then 21 with 6
//so array become 4,5,3,6,21
//here we see 21 is now fixed so loop 


#include<iostream>
using namespace std;

int bubblesort(int arr[],int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
}
int swap(int &x,int &y){
	int temp;
	temp=x;
	x=y;
	y=temp;
}
int printarr(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
}

int main(){
	int arr[5]={4,2,6,9,-1};
	bubblesort(arr,5);
	
cout<<"after sorted ";
printarr(arr,5);

	return 0;
}