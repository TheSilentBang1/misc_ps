#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int pivotFunc(vector <int> &arr, int low, int high){
    int i = low;
    int j = high;
    int pivot = arr[low];
    while(i<j){
        while(arr[i] >= pivot && i<=high-1){
            i++;
        }
        while(arr[j] < pivot && j>=low+1){
            j--;
        }
        if(i<j){
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j; //pIndex
}



void qS(vector <int> &arr, int low, int high){
    if(low<high){
        int pIndex = pivotFunc(arr, low, high);
        qS(arr, low, pIndex-1);
        qS(arr, pIndex+1, high);
    }
}



int main(){
    vector <int> arr = {4,6,2,5,7,9,1,3}; 
    int n = arr.size();
    qS(arr,0,n-1);

    for(auto i : arr){
        cout<<i<<" ";
    }


    return 0;
} 