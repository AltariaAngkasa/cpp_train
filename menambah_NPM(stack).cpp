#include <iostream>
using namespace std;

struct STACK
{
    int data[10];
    int top;
};
STACK tumpuk;

void push(int input){
    tumpuk.top++;
    tumpuk.data[tumpuk.top] = input;
}
int pop(){
    return tumpuk.top--;
}

void display(){
    tumpuk.top = -1;
}

bool IsEmpty(){
    if (tumpuk.top == -1)
    {
        return 1;
    }else
    {
        return 0;
    } 
}
bool IsFull(){
    if (tumpuk.top == 9)
    {
        return 1;
    }else{
        return 0;
    }
}

void print(){
    int i;
    cout<<"Data: "<<endl;
    for(i = 0; i <= tumpuk.top; i++){
        cout<<tumpuk.data[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int pilih, input;
    display();
    do
    {
    	cout<<"====DATA NPM===="<<endl;
        cout<<"1. Tambah Data"<<endl;
        cout<<"2. Kurangi Data"<<endl;
        cout<<"3. Print Data"<<endl;
        cout<<"4. Clear Data"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Piih: ";
        cin>>pilih;
        switch (pilih)
        {
        case 1:{
            system("cls");
            if (IsFull() == 1)
            {
                cout<<"File penuh";
            }else{
                cout<<"Masukkan NPM: ";
                cin>>input;
                push(input);
            }
            
            break;
        }
        case 2:{
            system("cls");
            if(IsEmpty() == -1){
                cout<<"File kosong";
            }else{
                cout<<"NPM yang dikurangi: "<<pop()<<endl;
            }
            break;
        }
        case 3:{
        	system("cls");
             if(IsEmpty() == -1){
                cout<<"File kosong";
            }else{
                print();
            }
            break;
        }
        case 4:{
            system("cls");
            display();
            break;
        }
        default:
            break;
        }
    } while(pilih >= 1 && pilih <=4);
    
    return 0;
}
