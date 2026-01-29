#include<bits/stdc++.h>
using namespace std;
bool cp(int n){
	int a=sqrt(n);
	if(n==a*a) return true;
	else return false;
}
int main(){
	int n,tong=0;
	cout<<"Nhap N = ";
	cin>>n;
	if(n>10&&n<1000){
		cout<<"Cac so chinh phuong duong <"<<n<<":";
		for(int i=1;i<=n;i++){
			if(cp(i)==1&&i<n) {
			cout<<" "<<i;
			tong+=i;}
		}
		cout<<"\nTong so chinh phuong: "<<tong;
	}
	else cout<<"Khong thoa man yeu cau!";
}
