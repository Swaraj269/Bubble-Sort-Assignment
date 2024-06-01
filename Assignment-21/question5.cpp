// Check if the given array is almost sorted. (elements are at-most one position away)

#include <iostream>
using namespace std;
int main(){
    int arr[5] = {4,2,9,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<< arr[i]<< " ";
    }
        for(int j = 0; j<=n-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                j++;
            }
        }
    bool flag = false;
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            flag = true;
            break;
        }
    }
    cout<< endl;
    if(flag==false) cout<< "Is almost shorted";
    else cout<< "Is not almost shorted";
    return 0;
}