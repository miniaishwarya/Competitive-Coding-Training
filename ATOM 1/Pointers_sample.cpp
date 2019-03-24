#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr1[]={1,2,3,4,5};
	int *arr=new int[5];
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	cout<<arr1[0]<<endl;
	cout<<*arr1<<endl;
	cout<<*arr1+4<<endl;
	cout<<arr[0]<<endl;
	cout<<&arr[0]<<endl;
	cout<<*(arr+0)<<endl;
	cout<<(arr+0)<<endl;

	return 0;
}