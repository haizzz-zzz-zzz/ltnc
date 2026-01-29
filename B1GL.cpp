#include <bits/stdc++.h>
using namespace std;
int main(){
	int sogiolam;
	long long tiencong;
	cout<<"Nhap so gio lam: ";
	cin>>sogiolam;
	while(sogiolam<10||sogiolam>65){
			cout<<"Nhap so gio lam: ";
	cin>>sogiolam;
	}
		if(sogiolam>40){ 
			 tiencong=(1ll*(sogiolam-40)*15000*1.5)+40*1ll*15000;
		}
		else tiencong =1ll*sogiolam*15000;
		cout<<"So luong ban nhan duoc: ";
		cout<<tiencong<<endl;
	}
	
