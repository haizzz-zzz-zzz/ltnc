#include <bits/stdc++.h>
using namespace std;
struct sinhvien{
	string id;
	double diem;
	string ten;
};
int main (){
		int n;
		cout<<"Nhap so hoc vien n = ";
	cin>>n;
	while(n<=0||n>=20000){
		cout<<"Nhap so hoc vien n = ";
		cin>>n;
	}
	vector<sinhvien> v;
	for(int i=0;i<n;i++){
		sinhvien x;
		cout<<"\nNhap thong tin hoc vien thu "<<i+1<<":\n";
		cout<<"ID: ";
		cin>>x.id;
		cin.ignore();
		cout<<"Name: ";
		getline(cin,x.ten);
		cout<<"Mark: ";
		cin>>x.diem;
		v.push_back(x);
	}
		cout<<"\nDanh sach hoc vien:\n";
		cout<<"ID	Name	Mark\n";
		for(sinhvien x:v){
			cout<<x.id<<"\t"<<x.ten<<"\t"<<x.diem<<endl;
		}
		sinhvien moix;
		cout<<"\nNhap hoc vien moi:\n";
		cout<<"ID: ";
		cin>>moix.id;
		cin.ignore();
		cout<<"Name: ";
		getline(cin,moix.ten);
		cout<<"Mark: ";
		cin>>moix.diem;
		v.insert(v.begin()+0,moix);
		cout<<endl;
		cout<<"Danh sach hoc vien sau khi them vao dau:\n";
		cout<<"ID	Name	Mark\n";
		for(sinhvien x:v){
			cout<<x.id<<"\t"<<x.ten<<"\t"<<x.diem<<endl;
		}
}
