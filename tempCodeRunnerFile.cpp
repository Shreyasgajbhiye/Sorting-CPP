#include<iostream>
using namespace std;

int main()
{
    int arr[] = {9,8,7,6,8,5,3};
    for (int i=1;i<sizeof(arr)/4;i++){
        int temp = arr[i];
        int j = i-1;
        for(;j>=0;j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;

    }

    for(int i=0;i<sizeof(arr)/4;i++){
        cout << arr[i] << " ";
    }    
    return 0;
}