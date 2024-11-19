#include <bits/stdc++.h>
using namespace std;
int main(){
	int i,n,arr[10];
	cout<<"phan tu cua mang la";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"phan tu "<<i+1<<endl;
		cin>>arr[i];
	}
	for(i=0;i<n;i++){
		cout<<setw(5)<<arr[i];
	}
	int sum=0;
	for(i=0;i<n;i++){
		sum+=arr[i];
	}
	cout<<"\n  tongggggggggggggg     "<<sum<<endl;
	int tongam=0;
	for(i=0;i<n;i++){
		if(arr[i]<0){
			tongam+=arr[i];
		}
	}
	cout<<"\n ammmmmmmmmmmmmmmmmm    "<<tongam<<endl;
	int max=arr[0];
	for(i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	cout<<"\n gia tri lon nhat mang la:   "
	<<max;

int tongchan=0;
for(i=0;i<n;i++){
	if(arr[i]%2==0){
		tongchan+=arr[i];
	}
}
cout<<" \n tong chan la :"<<tongchan;
			
	cout<<endl<<le;

	return 0;
}