#include <bits/stdc++.h> 
using namespace std;
int main (){
	vector<int > v;
	cout<<"Nhap danh sach. Nhap 0 de ket thuc!\n";
	int min=INT_MAX;
	int max=-min;
	while(1){
		int x;
		cout<<"Phan tu: ";
		cin>>x;
		if(x==0) break;
		else {
			v.push_back(x);
		}
	}
	cout<<"\nIn danh sach:";
	for(int i=0;i<v.size();i++){
		cout<<" "<<v[i];
		if(v[i]>max) max=v[i];
		if(v[i]<min) min=v[i];
	}
	cout<<endl;
	cout<<"\nSo lon nhat la: "<<max<<endl;
	cout<<"So nho nhat la: "<<min;
}
