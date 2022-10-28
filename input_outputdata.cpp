#include <iostream>
using namespace std;

int main(){
	string nama,program_studi,alamat,tempat_lahir,hobi;
	int npm,tanggal_lahir;
	
	cout<<"Masukkan Nama:"; cin>>nama;
	cout<<"Masukkan NPM:"; cin>>npm;
	cout<<"Masukkan Program Studi:"; cin>>program_studi;
	cout<<"Masukkan Alamat:"; cin>>alamat;
	cout<<"Masukkan Tempat Lahir:"; cin>>tempat_lahir;
	cout<<"Masukkan Tanggal lahir:"; cin>>tanggal_lahir;
	cout<<"Masukkan Hobi:"; cin>>hobi;
	
	cout<<"=============DATA PRIBADI KAMU================="<<endl;
	cout<<"Nama:"<<nama<<endl;
	cout<<"NPM:"<<npm<<endl;
	cout<<"Program Studi:"<<program_studi<<endl;
	cout<<"Alamat:"<<alamat<<endl;
	cout<<"Tempat Lahir:"<<tempat_lahir<<endl;
	cout<<"Tanggal Lahir:"<<tanggal_lahir<<endl;
	cout<<"Hobi:"<<hobi<<endl;
	return 0;				
}
