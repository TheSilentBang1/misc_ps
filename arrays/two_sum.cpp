#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// bool twoSum(vector <int> &arr, int n, int target){
//     for(int i  = 0; i<=n-2; i++){
//         for(int j = i+1; j<=n-1; j++){
//             if(arr[i] + arr[j] == target){
//                 return true;
//             }
//         }
//     }
//     return false;
// }

bool twoSumMap(vector <int> &arr, int n, int target){
    map <int,int> mpp;
    for(int i = 0; i< arr.size(); i++){
        int a = arr[i];
        int req = target - a;
        if(mpp.find(req) != mpp.end()){
            return true;
        }
        mpp[a] = i;
    }
    return false;
}

int main(){

    vector <int> arr = {3, 5, 6, 8, 30};
    int n = arr.size();
    int target = 14;
    // if(twoSum(arr, n, target)){s
    //     cout<<"TRUE"<<endl;
    // }
    // else{
    //     cout<<"FALSE"<<endl;
    // }
    // return 0;
    if(twoSumMap(arr,n,target)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;

    }
    return 0;

}