//insertion sort:
#include <bits/stdc++.h>
using namespace std;

void insertionSort ( int arr[], int n)
{
    for ( int i=1; i<n; i++){
        int key= arr[i];
        int j=i-1;

    while( j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;
    }
}
int main()
{
    int n;
    cout<<"Enter element number : ";
    cin>>n;
    int arr [n];
    for( int k=0; k<n; k++){
        cin>>arr[k];
    }
    insertionSort(arr,n);
    cout<<"Sotrted array: ";
    for (int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    return 0;
}

//selectionsort:
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


//mergesort:
#include<bits/stdc++.h>
using namespace std;

void mergeS (int A[], int L, int mid, int H){
    int m= mid-L +1;
    int n=H-mid;

    int left[m+1], right[n+1];

    for(int i=0; i<m; i++)
        left[i]=A[L+i];
    for (int j=0; j<n; j++)
        right[j]=A[mid+1+j];

    int i=0, j=0, k=L;
    while(i<m && j<n){
        if (left[i]<right[j])
            A[k++]=left[i++];
        else
            A[k++]=right[j++];
    }
    while (i<m)
        A[k++]=left[i++];
    while (j<n)
        A[k++]=right[j++];
}

void mergeSort( int A[], int L, int H){
    if (L < H){
        int mid= (L +H)/2;

        mergeSort (A, L, mid);
        mergeSort (A, mid+1, H);
        mergeS (A, L, mid, H);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cout<<"Enter num of elements: ";
    cin>>n;
    int arr[n];
    for(int k=0;k<n;k++)
        cin>>arr[k];
    mergeSort(arr, 0,n-1);

    cout << "Sorted array:   ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
