#include<bits/stdc++.h>

int findKRotation(vector<int> &arr){
    // Write your code here. 
    int low = 0;
    int high = arr.size() - 1;

    int ans = INT_MAX;
    int pos = -1;

    while(low <= high){
        int mid = low + (high - low)/2;

        if(arr[low] <= arr[high]){
            if(arr[low] < ans){
                ans = arr[low];
                pos = low;
            }
            break;
        }

        if(arr[low] <= arr[mid]){
            if(arr[low] < ans){
                ans = arr[low];
                pos = low;
            }
            low = mid + 1;
        }
        else{
            if(arr[mid] < ans){
                ans = arr[mid];
                pos = mid;
            }
            high = mid - 1;
        }

    }

    return pos;
}