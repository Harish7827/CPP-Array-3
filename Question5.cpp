// Q5 - Given a vector arr[] sorted in increasing order of n size and an integer x, find the number of unique pairs that exist in the array whose absolute sum is exactly x.

#include <iostream>
#include <vector>
using namespace std;
int UniquePairsSums(int arr, int k){
    
}
int main(){
    int arr[] = {1,2,3,4,6};
    int k;
    cout<<"Enter the sum : ";
    cin>>k;
    int ans = 0;
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
    int i = 0, j = sizeOfArray - 1;
    while (i < j){
        if (arr[i] + arr[j] == k){
            ans++;
            i++;
            j--;
        }
        else if (arr[i] + arr[j] > k){
            j--; 
        }
        else {
            i++; 
        }
    }
    cout<<ans<<endl;
    return 0;
}