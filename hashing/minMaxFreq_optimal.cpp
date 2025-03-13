// ps : to find minimum and maximum frequency element in an array
// time complexity : o(n)
// space complexity : o(n)

#include <stdio.h>
#include <bits/stdc++.h>
using namespace std; 

void findFreq(int arr[],int n){
    unordered_map<int, int> mpp;

    // precompute 
    for(int i = 0;i<n;i++){
        mpp[arr[i]]++;
    }

    int maxEl = 0, minEl = 0;
    int minFreq = n, maxFreq = 0;
    for(auto it : mpp){
        int count = it.second;
        int element = it.first;

        if(count<minFreq){
            minFreq = count;
            minEl = element;
        }
        if(count>maxFreq){
            maxFreq = count;
            maxEl = element;
        }
    }

    cout<<"maximum occurring element is : "<<maxEl<<endl;
    cout<<"minimum occurring element is : "<<minEl<<endl;
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    findFreq(arr,n);
    return 0;
}