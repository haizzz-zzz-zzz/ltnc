 #include <bits/stdc++.h> 
using namespace std;
bool check(int n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
int main (){
	float tong=0;
	int n;
	int dem=0;
	do{
		cout<<"Nhap n = ";
		cin>>n;
	}while(n<=0||n>=100);
	int a[n];
	for(int i=1;i<=n;i++){
		cout<<"So thu "<<i<<": ";
		cin>>a[i];
	} cout<<endl; 
	cout<<"In day so:";
	for(int i=1;i<=n;i++){
		cout<<" "<<a[i];
		tong+=a[i];
		if(check(a[i])) dem++;
	}
	double tbc=tong/n;
	cout<<endl; 
	cout<<"\nTBC day so: "<<tbc<<endl;
	cout<<"Day co "<<dem<<" so nguyen to.";
}
