#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <algorithm>

void sortArr(int arr[], int n){
    for(int i = 0; i<n; i++){
        int smallestIndex = i;
        for(int j = i+1;j<n;j++){
            if(arr[j] < arr[smallestIndex]){
                smallestIndex = j;
            }
        }
        swap(arr[i], arr[smallestIndex]);
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {7, 5, 9, 2, 8};
    int n = sizeof(arr)/sizeof(int);

    sortArr(arr, n);
}