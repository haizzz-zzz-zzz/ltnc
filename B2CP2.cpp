#include <bits/stdc++.h>
using namespace std ;
bool cp(int n){
	int a=sqrt(n);
	return a*a==n;
	}

int main (){
	long long min=10e9+7;
	long long max=-min;
	long long maxcp=-min;
	
	int n;
	cout<<"So phan tu n = ";
	cin>>n;
	while(n<=5||n>=20){
		cout<<"So phan tu n = ";
	cin>>n;
	}
	int a[n];
	for(int i=0;i<n;i++){
		cout<<"Phan tu: ";
		cin>>a[i];
		if(max<a[i]) max=a[i];
		if(min>a[i]) min=a[i];
		if(cp(a[i])&&maxcp<a[i]) maxcp=a[i];
	}
	cout<<endl;
	cout<<"Day so:";
	for(int i=0;i<n;i++){
		cout<<" "<<a[i];
	}
	cout<<endl<<"So max = "<<max;
	if(maxcp!=-(10e9+7)) cout<<"So chinh phuong lon nhat:"<<" "<<maxcp;
	else {
		cout<<"Day khong co so chinh phuong";
	}
}
