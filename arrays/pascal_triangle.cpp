#include <iostream>
using namespace std;

int findNcr(int n, int r){
    int res = 1;
    for(int i = 0; i<r; i++){
        res = res * (n - i);
        res = res / (i+1);
    }
    return res;
}

int findElement(int r, int c){
    // brute force approach, tc : o(n)
    int sol;
    sol = findNcr(r-1, c-1);
    return sol;
}

void printRow(int n){
    long long ans = 1;
    cout<<ans<<" ";
    for(int col = 1; col<n; col++){
        ans = ans * (n-col);
        ans = ans/col;
        cout<<ans<<" ";
    }

}

int main(){
    
    int r = 4;
    int c = 2;
    printRow(5);
    // int sol = findElement(r, c);
    // cout<<sol<<endl;

    return 0;
}