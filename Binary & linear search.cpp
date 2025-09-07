//binary search
#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;// element to find

    int low = 0, high = n - 1, mid, pos = -1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == x) {
            pos = mid;
            break;
        }
        else if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    if (pos != -1) cout << "Found at index " << pos;
    else cout << "Not found";

    return 0;
}

//linear search
#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;// element to find
    int pos = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            pos = i;
            break;
        }
    }

    if (pos != -1) cout << "Found at index " << pos;
    else cout << "Not found";

    return 0;
}

