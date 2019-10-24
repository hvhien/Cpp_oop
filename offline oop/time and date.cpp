#include<iostream>
#include<ctime>
using namespace std;
int main(){
	//show date and time on pc
	//  y/m/d
	//  h/m/s
	time_t x=time(0);
	char y[50];
	char z[50];
	if(strftime(y,sizeof(y),"%x",localtime(&x))){
		cout<<y<<endl;
	}
	if(strftime(z,sizeof(z),"%X",localtime(&x))){
		cout<<z;
	}
}
