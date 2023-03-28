#include <iostream>
using namespace std;

#define max 5
string data[max];
int top = 0;

bool isEmpty(){
    if(top == 0){
        return true;
    }else{
        return false;
    }
}

bool isFull(){
    if (top >= max)
    {
        return true;
    }else{
        return false;
    }
    
}
void display(){
    if (!isEmpty())
    {
        cout<<"Buku Tersimpan: "<<endl;
        for(int i = 0; i < top; i++){
            cout<<i+1<<". "<<data[i]<<endl;
        }
    } else{
        cout<<"Buku Tidak Tersedia!"<<endl;
    }
    if (isFull())
    {
        cout<<"Rak Penyimpana Penuh"<<endl;
    }
    cout<<endl;
    
    
}

void push(){
    if (!isFull())
    {
        cout<<"Masukkan nama Buku: ";
        cin>>data[top];
        top++;
    }
    
}

void pop(){
    if (!isEmpty())
    {
        top--;
    }
    
}

int main(){
    int pilih;
    string isi;

    stack :
        system("cls");
        display();
        cout<<"Pilih menu"<<endl;
        cout<<"1. Tambah buku"<<endl;
        cout<<"2. Ambil buku"<<endl;
        cout<<"Pilih menu: ";
        cin>>pilih;
    
    if (pilih == 1)
    {
        // system("cls");
        push();
        goto stack;
    } else if(pilih == 2){
        pop();
        goto stack;
    }
    system("cls");
    cout<<"Program Selesai"<<endl;
    
}