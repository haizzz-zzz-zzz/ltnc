#include<bits/stdc++.h>
using namespace std;

int main(){
	int i,n,h=1;
	
	do{
		cout<<"Nhap so phan tu: ";cin>>n;
	}
	while(n<=0||n>=20000);
	cout<<"Nhap cac phan tu: \n";
	int a[n];
	for(i=0;i<n;i++){
		cout<<"a["<<i<<"] = ";cin>>a[i];
	}
	cout<<"Mang vua nhap:\n";
	for(i=0;i<n;i++){
		cout<<"\t"<<a[i];
	}
	for(i=0;i<n;i++){
		if(a[i]!=a[n-i-1]){
			h=0;
			break;
		}
	}
	if(h==0){
		cout<<"\nMang khong doi xung";
	}
	else{
		cout<<"\nMang la doi xung";
	}
}
