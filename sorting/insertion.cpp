#include <iostream>
using namespace std;
#include <bits/stdc++.h>

void sortArr(vector <int> v, int n){
    for(int i = 0; i<=n-1; i++){
        int j = i;
        while(j>0 && v[j] < v[j-1]){
            swap(v[j], v[j-1]);
            j--;
        }
    }
    for(auto i : v){
        cout<<i<<" ";
    }
}

int main(){
    vector <int> v = {2,1,15,13,10,32,11};
    int n = v.size();
    sortArr(v, n);
}