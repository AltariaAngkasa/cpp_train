#include <bits/stdc++.h> 
using namespace std;

//mencari mean
float mean(float arr[], int n){
    float sum = 0;

    for(int i = 0;i < n; i++)
        sum += arr[i];
    
    return sum/n;
}

//mencari median
float median(float arr[], int n){

    sort(arr, arr + n);

    if(n % 2 == 0)
        return (arr[n/2 - 1] + arr[n/2])/2;

    return arr[n/2];
}

//mencari modus
float mode( float arr[], int n){ 
    sort(arr, arr + n); 
  
    int max_count = 1, res = arr[0], count = 1; 

    for (int i = 1; i < n; i++) { 
        if (arr[i] == arr[i - 1]) 
            count++; 
        else { 
            if (count > max_count) { 
                max_count = count; 
                res = arr[i - 1]; 
            } 
            count = 1; 
        } 
    } 
  
    if (count > max_count) 
    { 
        max_count = count; 
        res = arr[n - 1]; 
    } 
    
    return res;
}

int main(){
    int n;
    float arr[50];
	
	//masukkan banyaknya angka
    cout<<"Masukkan berapa angka yang mau diinput: ";
    cin>>n;

    //masukkan angka
    cout<<"Masukkan angka: ";
    for(int i = 0; i < n; i++)
        cin>>arr[i];

    //menampilkan mean, median dan modus
    cout<<"\nMean = "<<mean(arr, n);
    cout<<"\nMedian = "<<median(arr, n);
    cout<<"\nModus = "<<mode(arr, n);
    
    return 0;
}
