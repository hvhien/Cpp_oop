/*X�y dung lop co so VECTO c� c�c th�ng tin ve hai toa do trong mat phang hai chieu:
x, y v� c�c phuong thuc:
-	Phuong thuc nhap de nhap toa do x,y
-	Phuong thuc xuat de hien thi toa do cua v�c to ra m�n h�nh.
-	C�c ph�p to�n cong, tru hai v�c to (Cho hai v�c to A(x1,y1) v� B(x2,y2)
th� A+B l� v�c to c� toa do (x1+x2,y1+ y2), A-B l� v�c to c� toa do (x1-x2,y1- y2)
Viet chuong tr�nh ch�nh thuc hien nhap v�o hai v�c to A, B t�nh tong,
hieu cua ch�ng v� in ket qua  ra m�n h�nh.
*/
#include <bits/stdc++.h>

using namespace std;
class vecto
{
	int x,y;
	public:
		void nhap(){
			cin>>x;
			cin>>y;
		}
		void xuat(){
			cout<<x<<endl;
			cout<<y;
		}
	// friend ostream & operator<<(ostream&,vecto);
	// friend istream & operator>>(istream&,vecto &);
	vecto operator +(vecto);
	vecto operator -(vecto);
};
// ostream & operator<<(ostream& os,vecto u)
// 	{
// 		os<<"("<<u.x<<","<<u.y<<")"<<endl;
//  		return os;
// 	}
// istream & operator>>(istream& is,vecto &u)
// 	{
//  		cout<<"nhap x:";is>>u.x;
//  		cout<<"nhap y:";is>>u.y;
//  		return is;
// 	}

vecto vecto::operator +(vecto v)
	{
		vecto w;
		w.x=x+v.x;
		w.y=y+v.y;
		return w;
	}
vecto vecto::operator -(vecto h)
	{
		vecto t;
		t.x=this->x-h.x;
		t.y=this->y-h.y; return t;
	}
int main()
{
	vecto a,b,c,d;
	 // cin>>a;cout<<a;
	 // cin>>b;cout<<b;
	 a.nhap();
	 b.nhap();

	c=a+b;
	d=a-b;
	c.xuat();
	d.xuat();
	return 0;
}
