#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    
    cout<<"masukan nilai a :";
    cin>>a;
    if (a > 100){
    	cout<<"Nilai a lebih dari 100"<<endl;
	}
	else if (a < 1){
		cout<<"Nilai a kurang dari 1"<<endl;
	}
    cout<<"masukan nilai b :";
    cin>>b;
    if (b > 100){
    	cout<<"Nilai b lebih dari 100"<<endl;
	}
	else if (b < 1){
		cout<<"Nilai b kurang dari 1"<<endl;
	}
    c=a+b;
    //cout<<"Nilai dari penjumlahan a+b ="<<c;
	if (c > 200 ){
		cout<<"Nilai lebih dari batas"<<endl;
	} 
	else if (c < 1){
		cout<<"Nilai kurang dari 1"<<endl;
	}
	else {
		cout<<"Nilai dari penjumlahan a+b ="<<c;
	}
    
}
