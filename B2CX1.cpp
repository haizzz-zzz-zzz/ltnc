#include <bits/stdc++.h>
bool kiemtra(char c){
return c=='A'||c=='E'||c=='O'||c=='U'||c=='I';
}
using namespace std;
int main (){
	string s;
	cout<<"Nhap xau: ";
	getline(cin,s);
	cout<<"Xau ket qua: ";
	for(int i=0;i<s.size();i++){
		if(kiemtra(s[i])&&kiemtra(s[i+1])){
			cout<<s[i]<<"-";
		}
		else {
			cout<<s[i];
		}
	}
}
