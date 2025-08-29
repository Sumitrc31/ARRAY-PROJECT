/*
Project Name: ARRAY MANIPULATION
Created By: Sumit Roy Chyowdhury
Student ID: 0182420012101249
*/

#include <iostream>
using namespace std;

int arr[200] = {15, 25, 35, 45, 55};
int sizeArr = 5;

void display() {
    if (sizeArr == 0) {
        cout << "Array is empty!" << endl;
        return;
    }
    cout << "Array elements: ";
    for (int i = 0; i < sizeArr; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insert() {
    if (sizeArr >= 200) {
        cout << "Array is full!" << endl;
        return;
    }
    int pos, value;
    cout << "Enter insert position (1 to " << sizeArr + 1 << "): ";
    cin >> pos;
    if (pos < 1 || pos > sizeArr + 1) {
        cout << "Invalid position!" << endl;
        return;
    }
    cout << "Enter the new value: ";
    cin >> value;
    for (int i = sizeArr; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = value;
    sizeArr++;
    display();
    cout << "Data inserted successfully!" << endl;
}

void update() {
    if (sizeArr == 0) {
        cout << "Array is empty!" << endl;
        return;
    }
    int pos, value;
    cout << "Enter position to update (1 to " << sizeArr << "): ";
    cin >> pos;
    if (pos < 1 || pos > sizeArr) {
        cout << "Invalid position!" << endl;
        return;
    }
    cout << "Enter new value: ";
    cin >> value;
    arr[pos - 1] = value;
    display();
    cout << "Data updated successfully!" << endl;
}

void deleteElement() {   // 'delete' is reserved keyword in C++
    if (sizeArr == 0) {
        cout << "Array is empty!" << endl;
        return;
    }
    int pos;
    cout << "Enter position to delete (1 to " << sizeArr << "): ";
    cin >> pos;
    if (pos < 1 || pos > sizeArr) {
        cout << "Invalid position!" << endl;
        return;
    }
    for (int i = pos - 1; i < sizeArr - 1; i++) {
        arr[i] = arr[i + 1];
    }
    sizeArr--;
    display();
    cout << "Data deleted successfully!" << endl;
}

void search() {
    if (sizeArr == 0) {
        cout << "Array is empty!" << endl;
        return;
    }
    int value, pos = -1;
    cout << "Enter value to search: ";
    cin >> value;
    for (int i = 0; i < sizeArr; i++) {
        if (arr[i] == value) {
            pos = i + 1;
            break;
        }
    }
    if (pos == -1) {
        cout << "Value not found!" << endl;
    } else {
        cout << "Value found at position " << pos << endl;
    }
}

void sortArr() {
    if (sizeArr == 0) {
        cout << "Array is empty!" << endl;
        return;
    }
    for (int i = 0; i < sizeArr - 1; i++) {
        for (int j = 0; j < sizeArr - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Array sorted successfully!" << endl;
    display();
}

int main() {
    int choice;
    do {
        cout << "\n1. Insert\n2. Update\n3. Delete\n4. Display\n5. Search\n6. Sort\n7. Exit\n";
        cout << "Enter operation number: ";
        cin >> choice;

        switch (choice) {
            case 1: insert(); break;
            case 2: update(); break;
            case 3: deleteElement(); break;
            case 4: display(); break;
            case 5: search(); break;
            case 6: sortArr(); break;
            case 7: cout << "Exiting..." << endl; break;
            default: cout << "Invalid operation!" << endl;
        }
    } while (choice != 7);

    return 0;
}
