#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findMaj(vector<int> arr, int n){
    int floor = n/2;
    for(int i = 0; i<n; i++){
        int count = 0;
        for(int j = 0; j<n; j++){
            if(arr[j] == arr[i]){
                count++;
            }
        }
        if(count>floor){
            return arr[i];
        }
    }
    return -1;
}

int findMaj2(vector <int> arr, int n){
    map <int, int> mpp;
    for(int i = 0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto it : mpp){
        if(it.second > n/2){
            return it.first;
        }
    }
    return -1;
}

int findMaj3(vector <int> arr, int n){
    int count = 0;
    int el;
    for(int i = 0;i<n;i++){
        if(count == 0){
            el = arr[i];
            count++;
        }
        else if(arr[i] == el){
            count++;
        }
        else{
            count--;
        }
    }
    return el;
    
}



int main(){
    vector <int> arr = {3,2,3,2,3,3,3,2,2,1,1,1,1,1,1,1,1,1,1};
    int n = arr.size();
    // int sol = findMaj(arr, n);
    // int sol2 = findMaj2(arr,n);
    int sol3 = findMaj3(arr,n);

    cout<<sol3<<endl;
    return 0;

}