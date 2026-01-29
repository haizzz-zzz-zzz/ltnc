#include <bits/stdc++.h>
using namespace std;
using ll =long long;
int main (){
	int n;
	do{
		cout<<"Nhap n = ";
		cin>>n;
	}while(n<1||n>=10);
	ll demtam=0;
	ll tong=0;
	for(int i=1;i<=n;i++){
		demtam=demtam*10+8;
		if(i==1){
			cout<<demtam;
		}
		else {
			cout<<" + "<<demtam;
		}
		tong+=demtam;
	}
	cout<<" = "<<tong;
}
