#include <bits/stdc++.h>
using namespace std;
int n;
class Vector{

public:
  float v[1000];
    Vector(){
      for(int i=0;i<n;i++){
        v[i]=0;
      }
    }
    void nhap(){
      for(int i=0;i<n;i++){
        cout<<"nhap v["<<i+1<<"]:";
        cin>>v[i];

      }
    }
    void xuat(){
      for(int i=0;i<n;i++){
        cout<<v[i]<<"  ";
      }
    }
    friend Vector operator +(Vector a,Vector b);
    friend Vector operator -(Vector a,Vector b);
    friend Vector operator -(Vector a,Vector b);

};
Vector operator +(Vector a,Vector b){
  Vector c;
  for(int i=0;i<n;i++){
    c.v[i]+= a.v[i]+b.v[i];

  }
  return c;
}
Vector operator -(Vector a,Vector b){
  Vector c;
  for(int i=0;i<n;i++){
    c.v[i]+=a.v[i]-b.v[i];
  }
  return c;
}
Vector operator *(Vector a,Vector b){
  Vector c;
  for(int i=0;i<n;i++){
    c.v[i]+=a.v[i]*b.v[i];
  }
  return c;
}
int main(){
  Vector a,b,c;
  cin>>n;
  a.nhap();

  b.nhap();
  b.xuat();
  cout<<'\n';
  a.xuat();
  cout<<'\n';

  c=a+b;
  c.xuat();
  cout<<'\n';
  c=a-b;
  c.xuat();
  cout<<'\n';
  c=a*b;
  c.xuat();
  return 0;
}
