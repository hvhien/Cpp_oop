#include <bits/stdc++.h>
using namespace std;
class GIAMDOC{
protected:
  string MaGD,HoTenGD,NgaySinh;
public:
  void Nhap(){
    std::cout << "nhap MaGD:" << '\n';
    cin.ignore();
    getline(cin,MaGD);
    std::cout << "nhap HoTenGD:" << '\n';
    getline(cin,HoTenGD);
    std::cout << "nhap NgaySinhGD:" << '\n';
    getline(cin,NgaySinh);

  }
  void Xuat(){
    std::cout << "MaGD"<<"\t\t\t"<<"HoTenGD"<<"\t\t\t"<<"NgaySinhGD" << '\n';
    std::cout <<MaGD<<"\t\t\t"<<HoTenGD<<"\t\t\t"<<NgaySinh<< '\n';
  }
};
class NHANVIEN{
protected:
  string MaNV,HoTenNV,NgaySinhNV;

public:
  float HeSoLuong;
  void Nhap(){
    std::cout << "nhap MaNV:" << '\n';
    cin.ignore();
    getline(cin,MaNV);
    std::cout << "nhap HoTenNV:" << '\n';
    getline(cin,HoTenNV);
    std::cout << "nhap NgaySinhNV:" << '\n';
    getline(cin,NgaySinhNV);
    std::cout << "nhap HeSoLuong cua NV:" << '\n';
    cin>>HeSoLuong;
  }
  void Xuat(){
    std::cout << "MaNV"<<"\t\t\t"<<"HoTenNV"<<"\t\t\t"<<"HeSoLuong" << '\n';
    std::cout <<MaNV<<"\t\t\t"<<HoTenNV<<"\t\t\t"<<HeSoLuong<< '\n';

  }
};
class CONGTY{
protected:
  string MaCT,TenCT;
  GIAMDOC X;
  NHANVIEN Y[10000];
public:
  int n;
  void Nhap(){
    std::cout << "nhap MaCT:" << '\n';
    cin>>MaCT;
    std::cout << "nhap TenCT:" << '\n';
    cin>>TenCT;

    std::cout << "-------------------nhap thong tin GD-------------------" << '\n';
    X.Nhap();

    std::cout << "nhap so luong nhan vien trong coong ty:" << '\n';
    cin>>n;
    for(int i=0;i<n;i++){
      std::cout << "-------------------nhap thong tin nhap vien thu "<<i+1<<"-------------------" << '\n';
      Y[i].Nhap();
    }
  }
  void Xuat(){
    std::cout << "MaCT la "<<MaCT << '\n';
    std::cout << "TenCT"<<TenCT << '\n';
    std::cout << "-------------------thong tin giam doc-------------------" << '\n';
    X.Xuat();
    std::cout << "-------------------thong tin nhan vien-------------------" << '\n';
    for(int i=0;i<n;i++){
      std::cout << "------thong tin nhan vien thu "<<i+1<<"------" << '\n';
      Y[i].Xuat();
    }
    std::cout <<"\n\n\n";
    for(int i=0;i<n;i++){
      if(Y[i].HeSoLuong<4.88){
        std::cout << "------thong tin nhan vien co he so luong <4.88-------" << '\n';
        Y[i].Xuat();
      }
    }

  }
};
int main(){
  CONGTY a;
  a.Nhap();
  a.Xuat();
  return 0;
}
