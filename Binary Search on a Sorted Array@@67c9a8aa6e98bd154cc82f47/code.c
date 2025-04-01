#include<stdio.h>

int binarySearch(int arr[],int n,int target){
    int left,right;
    while(left<=right){
        int mid=left+(right-left)/2;
    
    if(arr[mid]==target){
        return mid;
    }
    if(arr[mid]<target){
        left=mid+1;
    }
    else{
        right=mid-1;
    }
    } 
    return -1;
}