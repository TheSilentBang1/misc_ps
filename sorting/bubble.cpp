#include <iostream>
using namespace std;
#include <bits/stdc++.h>

void sortArr(vector <int> v, int n){
    bool swapMade = false;
    // i -> for range definition, initially : n-1 to 0, then it decreases after each pass as the largest element in that range bubbles to end of range, n-2 to 0, n-3 to 0 and so on
    for(int i = n-1; i>=0; i--){
        // inner loop to make swaps to bubble the largest element to the end in a pass
        for(int j = 0; j<= i-1; j++){ // j = 0 to i-1 as we are comparing j with j+1, therefore it will compare all elements in the pass, even the ith element
            if(v[j] > v[j+1]){
                swap(v[j], v[j+1]);
                swapMade = true;
            }
        }
        if(!swapMade){
            break;
        }
    }
    for(auto i : v){
        cout<<i<<" ";
    }

}

int main(){
    vector <int> v = {7,4,2,5,1,30,3};
    int n = v.size();
    sortArr(v, n);
}