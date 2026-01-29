#include <bits/stdc++.h> 
using namespace std;
using ll=long long;

struct phanso {
    ll tu , mau;
    void nhap() {
        cout << "Tu: ";
        cin >> tu;
        cout << "Mau: ";
        cin >> mau;
    }

    void in() {
        cout << "Tich a * b =";
        if (mau == 0) 
            cout << " 0/0";
        else {
            int mc = __gcd(abs(tu), abs(mau));
            tu /= mc;
            mau /= mc;
            if (mau < 0) {
                tu *= -1;
                mau *= -1;
      	}
      	if(tu<0) {
      		tu*=-1;
      		mau*=-1;
		  }
            cout << " " << tu << "/" << mau;
        }
    }
};

phanso tong(phanso a, phanso b) {
    phanso tmp;
    tmp.tu = a.tu * b.tu;
    tmp.mau = a.mau * b.mau;
    return tmp;
}

int main() {
    phanso a, b;
    cout << "Nhap phan so a:\n";
    a.nhap();
    cout << "Nhap phan so b:\n";
    b.nhap();
    cout << endl;
    tong(a, b).in();
}
