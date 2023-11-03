#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {5,6,7,4,3,2,9,0};
    int size = (sizeof(arr) / sizeof(arr[0]) -1);

    for(int i=1;i<size;i++){
        for(int j=0;j<size-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] ,arr[j+1] );
            }
        }
    }
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    return 0;
}