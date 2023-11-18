#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n){
    for (int i=n-1;i>=0;i--){
        for(int j=0;j<=n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
            }

        }
    }
}

int main() {
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    bubble_sort(arr,n);
    cout<<"sorted array is:";

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}