//Bubble sort
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of element :";
    cin>>n;
    int a[n];
    cout<<"Enter the "<<n<<" elements :";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]) swap(a[j],a[j+1]);
        }
    }
    cout<<"Sorted array :";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}
