#include<iostream>
using namespace std;

int Partition(int A[],int low,int high){
    int pivot=A[low];
    int i=low;
    int j=high;   //pivotindex
    while(i<j){
        while(pivot>=A[i]){
            i++;
        }
        while(pivot<A[j]){
            j--;
        }
        if(i<j){
            swap(A[i],A[j]);
        }
    }
    swap(A[low],A[j]);

    cout<<"PIVOT SET-"<<endl;
    for(int k=low;k<=high;k++){
        cout<<A[k]<<" ";
    }
    cout<<endl;
    return j;
}

void QuickSort(int A[],int low,int high){
    if(low >= high)
        return;
    int q=Partition(A,low,high);
    QuickSort(A,low,q-1);   //left
    QuickSort(A,q+1,high);    //right
}

int main(){
	int arr[] = {7,3,9,14,8};
	int size =sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
	QuickSort(arr,0,size-1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
	return 0;
}