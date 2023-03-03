// Q3 Solution
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int arr[n];
        int i, j, key, pairs = 0;
        for(i=0; i<n; ++i)
            cin>>arr[i];
        cin>>key;
        for(i=0; i<n; ++i){
            for(j=0; j<n; ++j){
                if(i != j){
                    if(arr[i] - arr[j] == key){
                        ++pairs;
                    }
                }
            }
        }
        cout<<pairs;
    }
    return 0;
}
