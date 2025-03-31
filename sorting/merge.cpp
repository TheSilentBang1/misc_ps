#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//here, instead of dividing the arrays and storing them into new arrays, we play with indices using low, mid, high as dividing and storing
//into new arrays would waste a lot of space/is impractical

//tc : o(n*logn)
//sc : o(n) -> for creating temp in merge step

// function to merge
void merge(vector <int> &arr, int low, int mid, int high){
    vector <int> temp;
    int left = low;
    int right = mid+1;
    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }
    for(int i  = low; i <= high; i++){
        arr[i] = temp[i-low];
    }
}




// function to divide the array recursively and call merge function
void mergeSort(vector <int> &arr, int low, int high){
    //base case
    if(low >= high){
        return;
    }
    int mid = (low+high)/2;
    //divide left half
    mergeSort(arr,low,mid);
    //divide right half
    mergeSort(arr,mid+1,high);

    //sort and merge them
    merge(arr, low, mid, high);
}


int main(){
    vector <int> arr = {3,1,2,4,1,5,2,6,4}; 
    int n = arr.size();
    mergeSort(arr,0,n-1);

    for(auto i : arr){
        cout<<i<<" ";
    }


    return 0;
}