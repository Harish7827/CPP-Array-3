// Q1. Given two vectors arr1[] and arr2[] of size m and n sorted in increasing order. Merge the two arrays into a single sorted array of size m+n.

#include<iostream>
using namespace std;
void printArray(int x[], int n){
    for( int i = 0; i < n; i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr1[] = {1,3,5};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {2,4,6};
    int n = sizeof(arr2) / sizeof(arr2[0]);

    int finalSortedArray[m + n];
    int k = 0, i = 0, j = 0;
    while(i < m && j < n){
        if(arr1[i] < arr2[j]){
            finalSortedArray[k] = arr1[i];
            k++;
            i++;
        }else{
            finalSortedArray[k] = arr2[j];
            k++;
            j++;
        }
    }
    while(i < m){
        finalSortedArray[k] = arr1[i];
        k++;
        i++;
    }
    while(j < n){
        finalSortedArray[k] = arr2[j];
        k++;
        j++;
    }
    printArray(finalSortedArray , (m+n));
    return 0;
}