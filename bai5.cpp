#include <bits/stdc++.h>
using namespace std;

int n;
class Vector
{
public:
    float v[1000];
    Vector()
    {
        for (int i = 1; i <= n; i++)
        {
            v[i] = 0;
        }
    }
    void nhapsl()
    {
        for (int i = 1; i <= n; i++)
        {
            cout << "v[" << i << "]: ";
            cin >> v[i];
        }
    }
    void insl()
    {
        for (int i = 1; i <= n; i++)
        {
            cout << " " << v[i];
        }
        cout << endl;
    }
    friend Vector operator +(Vector a,Vector b);
    friend Vector operator -(Vector a,Vector b);
    friend Vector operator *(Vector a,int k);
};
    Vector operator +(Vector a, Vector b)
    {
        Vector c;
        for (int i = 1; i <= n; i++)
        {
            c.v[i] += a.v[i] + b.v[i];
        }
        return c;
    }
    Vector operator -(Vector a, Vector b)
    {
        Vector c;
        for (int i = 1; i <= n; i++)
        {
            c.v[i] += a.v[i] - b.v[i];
        }
        return c;
    }
    Vector operator *(Vector a,int k)
    {
        Vector c;
        for (int i = 1; i <= n; i++)
        {
            c.v[i] += a.v[i] * k;
        }
        return c;
    }

int main()
{
    Vector a,d,b;
    int k;
    cin>>k;
    cout << "Nhap so phan tu cua vector a : "; cin >> n;
    cout << "Nhap vector a : \n";
    a.nhapsl();
    cout << "\nNhap vector b : \n";
    b.nhapsl();
    cout << "\nVector a: ";
    a.insl();
    cout << "Vector b: ";
    b.insl();
    d = a + b;
    cout << "Tong 2 vector: ";
    d.insl();
    d = a - b;
    cout << "Hieu 2 vector: ";
    d.insl();
    d = b * k;
    cout << "Nhan 2 vector: ";
    d.insl();
    system("pause");
}
