#include<iostream>

using namespace std;


void deletion_at_end(int arr[],int n){
    n=n-1;

    cout<<"after deleting end element ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void delete_at_first(int arr[],int n){
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n=n-1;
    cout<<"after deleting end element ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void delete_at_specific_index(int arr[],int n,int index){
    for(int i=index;i<n;i++){
        arr[i]=arr[i+1];
    }
    n=n-1;
    cout<<"after deleting end element ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n ;
    int arr[100];
    int index;

    cout<<"no of element present in the array  ";
    cin >>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the index ";
    cin>>index;

    deletion_at_end(arr,n);
    delete_at_first(arr,n);
    delete_at_specific_index(arr,n,index);
}