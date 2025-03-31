#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sort(vector <int> &arr, int n){
    if(n==1) return;

    for(int i = 0;i<=n-2;i++){
        if(arr[i] > arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }

    sort(arr, n-1);

}

int main(){
    vector <int> arr = {44,11,33,22,55,2,1,45};
    int n = arr.size();

    sort(arr, n);

    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}