// Q2. Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists a pair in the array whose sum is exactly x.

#include<iostream>
using namespace std;
int main(){
    int arr[] = {-2,-1,0,3,6,8,11,12};
    int m = sizeof(arr) / sizeof(arr[0]);
    int x = 23;

    bool found = false;
    for(int i = 0; i < m; i++){
        for(int j = 1; j < i; j++){
            if(arr[i] + arr[j] == x){
                found = true;
                break;
            }
        }
    }

    if(found == false){
        cout<<"NO\n";
    }else{
        cout<<"YES\n";
    }
    return 0;
}