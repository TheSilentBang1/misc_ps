// frequency of the most frequent element 

// number of maximum operations allowed : k

#include <stdio.h>
#include <bits/stdc++.h>
using namespace std; 

void maxFreq(int arr[], int k,int size){
    int maxElement = *max_element(arr, arr + size);
    int count = 0;
    // cout<<maxElement<<endl; 
    for(int i = 0;i<size;i++){
        if(arr[i] == maxElement){
            count++;
            continue;
        }
        while(arr[i] < maxElement && k!=0){
            k--;
            arr[i]++;
            //incomplete 
        }
        


    }
    cout<<count<<endl;

}

int main(){
    int arr[] = {1,2,4};
    int k = 5;
    maxFreq(arr, k, 3);
    return 0;
}