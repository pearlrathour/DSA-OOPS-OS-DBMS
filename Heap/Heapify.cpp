#include <bits/stdc++.h>
#define print(a)for (auto x : a)cout << x << ' ';cout<<endl;
using namespace std;

void Heapify(int i, int n, vector<int>& arr){
    int l=2*i+1, r= 2*i+2;
    int largest=i;
    if(l<=n && arr[l]>arr[largest])
        largest=l;
    if(r<=n && arr[r]>arr[largest])
        largest=r;
    if(largest!=i){
        swap(arr[i], arr[largest]);
        Heapify(largest,n,arr);
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];
    Heapify(0,n,arr);
    print(arr);
    return 0;
}