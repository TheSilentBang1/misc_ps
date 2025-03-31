#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void sort(vector <int> &arr, int i, int n){
    if(i >= n) return;

    int j = i;

    while(j>0 && arr[j] < arr[j-1]){
        swap(arr[j], arr[j-1]);
        j--;
    }

    sort(arr, i+1, n);
    

}

int main(){
    vector <int> arr = {44,11,33,22,55,2,1,45};
    int n = arr.size();

    sort(arr,0, n);

    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}