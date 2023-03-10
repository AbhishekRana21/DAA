//  Q2 Solution
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
        int first, mid, last, count = 0, flag = 0;
        for(int i = 0; i< n; ++i)
            cin>>arr[i];
        SelectionSort(arr,n);
        int element;
        cin>>element;
        first = 0; last = n-1; 
        while(first <= last){
            mid = (first+last)/2;
            if(arr[mid] == element){
                cout<<element<<" - ";
                ++count;
                flag = 1;
                break;
            }
            else if(arr[mid] > element){
                last = mid - 1;
            }
            else{
                first = mid + 1;
            }
        }
        if(flag){
            int i = mid-1, j = mid+1;
            while(arr[i--] == element) ++count;
            while(arr[j++] == element) ++ count;
            cout<<count<<endl;
        }
        else{
            cout<<"Key not present"<<endl;
        }
    }
    
    return 0;
}
