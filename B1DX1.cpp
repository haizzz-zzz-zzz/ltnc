#include <bits/stdc++.h>
using namespace std;
bool latnguoc(long long n){
	long long lat=0;
	long long a=n;
	while(n!=0){
		lat=lat*10+n%10;
		n/=10;
	}
	if(lat==a ) return true;
	else return false;
}
int main (){
	long long n;
	cout<<"Nhap so nguyen duong n = ";
	cin>>n;
	int dem=0; 
	//kiem tra xem n co dung khong
	while(n<=10){ // khi nao n van sai vong while con chay
		cout<<"Nhap so nguyen duong n = ";
		cin>>n;
	}
	// khi n dung cac dong duoi chay tiep
		if(latnguoc(n)==1) cout<<n<<" "<<"la so doi xung!"<<endl;
		else {
			cout<<n<<" "<<"khong la so doi xung!"<<endl;
		}
	for (int i=1;i<=n;i++){
		if(latnguoc(i)==1) dem++;
}
cout<<"Co "<<dem<<" so doi xung trong khoang tu 1 den "<<n;;
}
