#include <bits/stdc++.h>
using namespace std;
class PS{//class phân số


public:
  int mau,tu;
  void Nhap(){
    std::cout << "nhap tu:" << '\n';
    cin>>tu;
    std::cout << "nhap mau:" << '\n';
    cin>>mau;

  }
  void Xuat(){
    std::cout << "phan so vua nhap la\t "<<tu<<"/"<<mau << '\n';
  }
  friend bool operator ==(PS a, PS b);//định nghĩa toán tử ==
  friend bool operator >=(PS a,PS b);//định nghĩa toán tử >=
  friend bool operator <=(PS a,PS b);//định nghĩa toán tử <=
  friend bool operator >(PS a,PS b);//định nghĩa toán tử >
  friend bool operator >(PS a,PS b);//định nghĩa toán tử <

};
bool operator==(PS a, PS b)
{
    return (a.tu*b.mau == a.mau*b.tu);
}
bool operator >(PS a,PS b){
  return (a>b);
}
bool operator <(PS a,PS b){
  return (a<b);
}
bool operator >=(PS a,PS b){
  return (a>b||a==b);
}
bool operator <=(PS a,PS b){
  return (a<b||a==b);
}

int main(){
  float a[5];
  PS x;
  for(int i=0;i<5;i++){//nhập 5 phân số vào mảng
    std::cout << "nhap phan so thu "<<i+1 << '\n';
    x.Nhap();
    a[i]=(float)x.tu/x.mau;

  }
  float max=a[0];
  float min=a[0];
  for(int i=0;i<5;i++){//tìm max trong mảng
    if(a[i]>max){
      max=a[i];
    }

  }
  std::cout << "max="<<max << '\n';
  for(int i=0;i<5;i++){//tìm min trong mảng
    if(a[i]<min){
      min=a[i];
    }
  }
  std::cout << "min ="<<min << '\n';
}
