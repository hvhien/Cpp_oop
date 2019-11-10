#include <bits/stdc++.h>
using namespace std;
class MAY{


public:
  string MaMay,Brand;
  int NamSanXuat;
  void Nhap(){
    std::cout << "nhap MaMay:" << '\n';
    cin.ignore();
    getline(cin,MaMay);
    std::cout << "nhap cong ty san xuat:" << '\n';
    getline(cin,Brand);
    std::cout << "nhap nam san xuat:" << '\n';
    cin>>NamSanXuat;
  }
  void Xuat(){
    //std::cout << "MaMay"<<"\t\t\t|"<<"Brand"<<"\t\t\t|"<<"nam san xuat|" << '\n';
    std::cout << MaMay<<"\t\t\t|"<<Brand<<"\t\t\t|"<<NamSanXuat<<"|" << '\n';
  }
};
class MAYVITINH: public MAY{
protected:
  string RAM,HDD;
  int MONITOR;

public:
    MAY b;
  void Nhap(){
    b.Nhap();
    std::cout << "nhap dung luong RAM:" << '\n';
    cin.ignore();
    getline(cin,RAM);
    std::cout << "nhap dung luong HDD:" << '\n';
    getline(cin,HDD);
    std::cout << "nhap kich thuoc man hinh:" << '\n';
    cin>>MONITOR;

  }
  void Xuat(){
   std::cout <<RAM<<"\t|"<<HDD<<"\t|"<<MONITOR<<"\t"<<b.MaMay<<"\t"<<b.Brand<<"\t"<<b.NamSanXuat;

  }
};
class PHONGMAY{
protected:
  string MaPH,TenPH;
  MAYVITINH x[1000];

public:
  int n;
  void Nhap(){
    std::cout << "nhap MaPH:" << '\n';
    cin.ignore();
    getline(cin,MaPH);
    std::cout << "nhap TenPH:" << '\n';
    getline(cin,TenPH);
    std::cout << "nhap so luong may vi tinh trong phong hoc:" << '\n';
    cin>>n;
    for(int i=0;i<n;i++){
      std::cout << "----------nhap thong tin cho may tinh thu "<<i+1<<" ----------" << '\n';
      x[i].Nhap();
    }

  }
  void Xuat(){
    std::cout << "MaPH la"<<"\t\t"<<"TenPH" << '\n';
    std::cout << MaPH<<"\t\t"<<TenPH << '\n';
    std::cout << "-------------nhung may tinh duoc san xuat nam 2017 la:------------" << '\n';
    std::cout <<"RAM"<<"\t|"<<"HDD"<<"\t|"<<"MONITOR"<<"\t|"  << "MaMay"<<"\t|"<<"Brand"<<"\t|"<<"nam san xuat|"<<'\n';

    for(int i=0;i<n;i++){
     if(x[i].b.NamSanXuat==2017){
        x[i].Xuat();
      }
    }
  }




};
int main(){
  PHONGMAY a;
  a.Nhap();
  a.Xuat();
  return 0;
}
