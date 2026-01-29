#include <bits/stdc++.h> 
using ll=long long ;
using namespace std;
ll check(ll n){
	ll f0=0;
	ll f1=1;
	if(n==0){
		return f0 ;
	}
if(n==1) return f1;
	ll fn;
	for(int i=2;i<=n;i++){
		fn=f0+f1;
		f0=f1;
		f1=fn;
	}
	return fn;
}
int main (){
	ll n;
	char x; 
	do{
	cout<<"Cho so nguyen n = ";
	cin>>n;	
	if(n<0){ //n sai
	cout<<"Nhap sai! So n phai khong am."<<endl;
	}
	else  { // n dung
	cout<<"So Fibonacci thu "<<n<<" la: "<<check(n)<<endl;
	}
	cout<<"Ban co muon tim tiep khong?(C/c: Tim tiep) ";
	cin>>x;
	}while(x=='c'||x=='C');
}

