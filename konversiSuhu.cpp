#include <iostream>
using namespace std;

int main(){
	int c,r,f,k,p;
	
	cout<<"=================="<<endl;
	cout<<"KONVERSI SUHU"<<endl;
	cout<<"1. Celcius"<<endl;
	cout<<"2. Reamur"<<endl;
	cout<<"3. Kelvin"<<endl;
	cout<<"4. Fahrenheit"<<endl;
	cout<<"PILIH SUHU: "; cin>>p;
	if (p == 1){
			cout<<"Masukkan angka: ";cin >> c;
			float ream, kelv, fahr;
			ream = c * 0,8;
			kelv = c + 273;
			fahr = (9.0/5.0) * c + 32;
			cout<<"Suhu "<<c<<" Celcius sama dengan "<< ream <<" Reamur"<<endl;
			cout<<"Suhu "<<c<<" Celcius sama dengan "<< kelv <<" Kelvin"<<endl;
			cout<<"Suhu "<<c<<" Celcius sama dengan "<< fahr <<" Fahrenheit"<<endl;
	}
	if (p == 2){
		cout<<"Masukkan angka: ";cin >> r;
		float celc, kelv, fahr;
		celc = (5.0/4.0) * r;
		kelv = (5.0/4.0) * r + 273;
		fahr = (9.0/4.0) * r + 32;
		cout << "Suhu " << r << " Reamur sama dengan "<< celc << " Celcius"<<endl;
		cout << "Suhu " << r << " Reamur sama dengan "<< kelv << " Kelvin"<<endl;
		cout << "Suhu " << r << " Reamur sama dengan "<< fahr << " Fahrenheit"<<endl;
	}
	if (p == 3){
		cout<<"Masukkan angka: ";cin >> k;
		float celc, ream, fahr;
		celc = k - 273;
		ream = (k + 273) * 0.8;
		fahr = (k - 273) * 1.8 + 32;
		cout << "Suhu " << k << " Kelvin sama dengan "<< celc << " Celcius"<<endl;
		cout << "Suhu " << k << " Kelvin sama dengan "<< ream << " Reamur"<<endl;
		cout << "Suhu " << k << " Kelvin sama dengan "<< fahr << " Fahrenheit"<<endl;
	}
	if (p == 4){
		cout<<"Masukkan angka: "; cin >> f;
		float celc, ream, kelv;
		celc = (f - 32) * 5.0/9.0;
		ream = (f - 32) * 4.0/9.0;
		kelv = (f - 32) * 5.0/9.0 + 273;
		cout << "Suhu " << f << " Fahrenheit sama dengan "<<celc<<" Celcius"<<endl;
		cout << "Suhu " << f << " Fahrenheit sama dengan "<<ream<<" Reamur"<<endl;
		cout << "Suhu " << f << " Fahrenheit sama dengan "<<kelv<<" Kelvin"<<endl;
	}
	else{
		cout<<"INVALID INPUT";
		return 0;
	}
}
