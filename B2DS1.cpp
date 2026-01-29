#include <bits/stdc++.h>
using namespace std; 
int main (){
	int n;
	double dem=0;
	double tong=0;
	double x;
	int demthuc=0;
	cout<<"Nhap n = ";
	cin>>n;
	while(n<=4||n>=100){
		cout<<"Nhap n = ";
	cin>>n;
	}
	double a[n];
	for(int i=0;i<n;i++){
		cout<<"So thu "<<i+1<<": ";
		cin>>a[i];
		if(a[i]>0){
			dem++;
			tong+=a[i];
		}
	}
	cout<<"In day so:";
	for(int i=0;i<n;i++){
		cout<<" "<<a[i];
	}
	cout<<endl<<"Cho so thuc x = ";
	cin>>x;
	cout<<endl;
	if(dem==0){
		cout<<"Day co 0 so duong."<<endl;
	}
	else {
		cout<<"Day co "<<dem<<" so duong.";
		double tb=tong/dem;
		cout<<"Trung binh cong cac so duong = "<<tb<<endl;
	}
	for(int i=0;i<n;i++){
		if(x==a[i]) demthuc++;
	}
	cout<<"Day co "<<demthuc<<" so thuc x.";
}
