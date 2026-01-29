#include <bits/stdc++.h>
bool cp(int n){
	int a=sqrt(n);
	return a*a==n;
	}

using namespace std;
int main (){
	int n;
	cout<<"n=";
	cin>>n;
	int demcc=0;
	int x;
	while(n<=0||n>=200){
		cout<<"n=";
	cin>>n;
	}
	int a[n];
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
	cout<<"Day so vua nhap:";
	for(int i=0;i<n;i++){
		if(i==0) {
			cout<<endl;
			cout<<a[i];
		}
		else cout<<"\t"<<a[i];
	}
	cout<<endl<<"Nhap x = ";
	cin>>x;
	int dem=0;
	for(int i=0;i<n;i++){
		if(cp(a[i])&&a[i]<x) dem++;
	}
	if(dem==0) cout<<"Khong co so chinh phuong so nho hon "<<x<<" !";
	else {
		cout<<"Cac chinh phuong so nho hon "<<x<<":";
		for(int i=0;i<n;i++){
			if(cp(a[i])&&a[i]<x&&demcc==0){
			cout<<endl;
			cout<<a[i];
			demcc++;
			}
			else if(cp(a[i])&&a[i]<x&&demcc!=0){
				cout<<"\t"<<a[i];
			}
		}
	}
} 
