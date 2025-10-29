#include <bits/stdc++.h>
using namespace std;

void insertionsort( int arr[], int n )
{
    for ( int i=1; i<n; i++){
            int key = arr [i];
            int j = i - 1;

    while (j>= 0 && arr[j] > key){
            arr [j+1] = arr [j];
            j--;
    }
    arr [j+1] = key;
}}
int main ()
{
    int arr[] = { 10,4,12,-4,6 };
    int n = sizeof (arr)/ sizeof arr[0];

    insertionsort(arr, n);

    cout<<"sorted arrray: ";
    for ( int i=0; i<n; i++)
        cout<<arr[i]<< " ";
    return 0;
}
