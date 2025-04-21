#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void sort(vector <int> &arr, int n){
    int a = 0; // count of 0
    int b = 0; // count of 1
    int c = 0; // count of 2

    for(int i = 0; i<n; i++){
        if(arr[i] == 0){
            a++;
        }
        else if(arr[i] == 1){
            b++;
        }
        else{
            c++;
        }
    }
    for(int i = 0; i<a; i++){
        arr[i] = 0;
    }
    for(int i = a; i<a + b; i++){
        arr[i] = 1;
    }
    for(int i = a+b; i<a+b+c; i++){
        arr[i] = 2;
    }
}

void sortDNF(vector <int> &arr, int n){
    int low = 0;
    int mid = 0;
    int high = n-1;
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[mid], arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}


int main(){

    vector <int> arr = {2, 0, 2, 1, 1, 0};
    int n = arr.size();
    // sort(arr, n);
    sortDNF(arr,n);

    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}