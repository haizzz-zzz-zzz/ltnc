#include <bits/stdc++.h>
using namespace std;
using ll =long long;
int main (){
	int n;
	double tong=1.0;
	do{
		cout<<"Nhap n = ";
		cin>>n;
	}while(n<=0);
	for(int i=2;i<=n;i++){
		tong+=1.0/pow(i,i);
	}
	cout<<"Tong = ";
	cout<<tong;
}
