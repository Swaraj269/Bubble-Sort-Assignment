// Sort the array in descending order using Bubble Sort.
#include <iostream>
using namespace std;
int main(){
    int arr[5] = {2,4,1,6,3};
    int n = 5;
    for(int i=0; i<n-1; i++){
        bool flag = false;
        for(int j=0; j<n-1-i; j++){
            if(arr[j]<arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = true;
            }
        }
        if(flag==false) break;
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}