// Q4 - Given a vector arr[] sorted in increasing order. Return an array of squares of each number sorted in increasing order. Where size of vector 1<size<101.

#include<iostream>
using namespace std;
int main(){
    int arr[] = {-5,-4,-3,-2,-1};
    int m = sizeof(arr) / sizeof(arr[0]);
    int newArr[m];
    int k = m - 1, i = 0, j = m - 1;
    while(i <= j && k >= 0){
        if(abs(arr[i]) > abs(arr[j])){
            newArr[k] = arr[i] * arr[i];
            i++;
            k--;
        }else{
            newArr[k] = arr[j] * arr[j];
            j--;
            k--;
        }
    }
    for(int i = 0; i < m; i++){
        cout<<newArr[i]<<" ";
    }
    return 0;
}