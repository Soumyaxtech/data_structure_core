#include<iostream>

using namespace std;


void insert_at_end(int arr[],int n,int element){

    arr[n]=element;
    n=n+1;

    cout<<"after inserting array is ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

void insert_at_first(int arr[],int n,int element){

    for(int i=n-1;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=element;
    n=n+1;

    cout<<"after inserting array is ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n ;
    int arr[100];
    int element;
    int index;

    cout<<"no of element present in the array  ";
    cin >>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"enter element you want to insert ";
    cin>>element;

    //insert_at_end(arr,n,element);
    insert_at_first(arr,n,element);
}