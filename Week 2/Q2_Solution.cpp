// Q2 Solution
#include <iostream>
#include <cstdlib>
using namespace std;

void SelectionSort(int *arr, int n){
    int i, j, temp;
    for(i = 0; i<n-1; ++i){
        for(j = i+1; j<n; ++j){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int arr[n];
        int i,j,k, flag = 0;
        for(i = 0; i<n; ++i)
            cin>>arr[i];
        SelectionSort(arr,n);
        for(i=0; i<n-2; ++i){
            for(j=i+1; j<n-1; ++j){
                for(k=j+1; k<n; ++k){
                    if(arr[i] + arr[j] == arr[k]){
                        cout<<i+1<<", "<<j+1<<", "<<k+1;
                        flag = 1;
                        break;
                    }
                }
                if(flag) break;
            }
            if(flag) break;
        }
        if(!flag){
            cout<<"No sequence found.";
        }
    }
    return 0;
}
