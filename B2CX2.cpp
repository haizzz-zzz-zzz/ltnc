#include <bits/stdc++.h>
using namespace std;
int main (){
	string s;
	cout<<"Nhap xau: ";
	getline(cin,s);
	cout<<"Xau ket qua: ";
	for(int i=0;i<s.size();i++){
		if(s[i]!=' '&&s[i+1]!=' '&&islower(s[i])&&isupper(s[i+1])){
			cout<<s[i]<<" ";
		}
		else {
			cout<<s[i];
		}
	}
}
