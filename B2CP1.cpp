#include<bits/stdc++.h>
using namespace std;
bool cp(int n){

	int h=sqrt(n);
	return h*h==n;
}
int main(){
	int n,h=0,c=0;
	do{
		cout<<"Nhap n = ";cin>>n;
		
	}
	while(n<5||n>20);
	int a[n];
	for(int i=0;i<n;i++){
		cout<<"So thu "<<i+1<<": ";cin>>a[i];
		if(cp(a[i])){
			h++;
			if(a[i]%2==0){
				c++;
			}
		}
	}
	cout<<"\nHien thi day so:";
	for(int x:a){
		cout<<" "<<x;
		
	}

	
	
	cout<<"\n\nDay co "<<h<<" so chinh phuong, trong do co "<<c<<" so chinh phuong chan!";
}
