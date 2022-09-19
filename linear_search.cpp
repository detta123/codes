#include<bits/stdc++.h>
using namespace std;
int index(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i+1;
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