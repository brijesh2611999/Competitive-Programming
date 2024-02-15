#include<bits/stdc++.h>
using namespace std;
bool binarySearch(int low,int high,int ele,int arr[]){
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==ele){
            return true;
        }
        else if(arr[mid]>ele){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return false;
}
int main(){
    int n,x;
    cin >>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cin >>x;
    cout << binarySearch(0,n-1,x,arr);
}