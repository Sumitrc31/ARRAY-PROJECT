#include<bits/stdc++.h>
using namespace std;

void selectionSort( int arr[], int n)
{
    for(int i=0; i<n-1; i++){
        int minindex= i;
        for (int j=i+1; j<n; j++){
            if (arr[j]<arr[minindex])
                minindex=j;
        }
        swap (arr[i], arr[minindex]);
    }
}
int main(){
    int n;
    cin >>n;
    int arr[n];
    for (int k=0; k<n; k++)
        cin>>arr[k];

    selectionSort(arr, n);

    cout<< "Sorted array: ";
    for (int i=0; i<n; i++)
        cout<< arr[i]<< " ";
    return 0;

}
