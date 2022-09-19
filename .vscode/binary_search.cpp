#include<bits/stdc++.h>
using namespace std;
int index(int arr[],int n,int key){
    int s=0;
    int l=n-1;
    while(s<l){
        int mid=(s+l)/2;
        if(arr[mid]==key){
            return mid+1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else{
            l=mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<index(arr,n,key);
}