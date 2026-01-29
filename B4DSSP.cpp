#include <bits/stdc++.h>
using namespace std;
struct sanpham{
	string id;
	double gia;
	string ten;
};
int main (){
		int n;
		cout<<"Nhap so san pham n = ";
	cin>>n;
	while(n<=0||n>=20000){
		cout<<"Nhap so san pham n = ";
		cin>>n;
	}
	vector<sanpham> v;
	for(int i=0;i<n;i++){
		sanpham x;
		cout<<"\nNhap thong tin san pham thu "<<i+1<<":\n";
		cout<<"ID: ";
		cin>>x.id;
		cin.ignore();
		cout<<"Name: ";
		getline(cin,x.ten);
		cout<<"Price: ";
		cin>>x.gia;
		v.insert(v.begin()+0,x);
	}
		cout<<"\nDanh sach san pham:\n";
		cout<<"ID	Name	Price\n";
			for(sanpham x:v){
			cout<<x.id<<"\t"<<x.ten<<"\t"<<x.gia<<endl;
		}
		v.pop_back();
		if(v.size()==0){
			cout<<"\nDanh sach da rong!";
		}
		else {
		cout<<"\nDanh sach san pham sau khi xoa san pham cuoi cung:\n";
		cout<<"ID	Name	Price\n";
		for(sanpham x:v){
			cout<<x.id<<"\t"<<x.ten<<"\t"<<x.gia<<endl;
		}
	}
}
