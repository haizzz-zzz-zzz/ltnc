#include <bits/stdc++.h>
using namespace std;
struct sinhvien{
	int sbd;
	string ten;
	float diem;
};
bool cmp(sinhvien a,sinhvien b){
	return a.diem<b.diem;
}
int main() {
    int n;
    cout << "Nhap n = ";
    cin >> n;
	sinhvien a[n];
	    for (int i = 0; i < n; ++i) {
        cout << "SBD: ";
        cin >> a[i].sbd;
        cin.ignore();
        cout << "Ho va ten: ";
        getline(cin, a[i].ten);
        cout << "Diem: ";
        cin >> a[i].diem;
    }
    sort(a, a+n, cmp);
    cout<<"Danh sach sap xep tang dan cua diem:\n";
    for(sinhvien x:a){
	cout<<x.sbd<<"\t"<<x.ten<<"\t"<<x.diem<<endl;
}
}
