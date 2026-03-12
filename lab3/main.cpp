#include <iostream>

using namespace std;

void swapValues(int* p1, int* p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int findSum(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}

void shiftRight(int* arr, int size) {
    if (size <= 1) return;
    int lastElement = *(arr + size - 1);
    for (int i = size - 1; i > 0; i--) {
        *(arr + i) = *(arr + i - 1);
    }
    *arr = lastElement;
}

int* createArray(int size) {
    return new int[size];
}

void deleteArray(int* arr) {
    delete[] arr;
}

int main() {
    cout << "Creating dynamic array." << endl;

    int size;
    cout << "Enter array size: ";
    cin >> size;

    int* arr = createArray(size);

    cout << "Enter values: ";
    for (int i = 0; i < size; i++) {
        cin >> *(arr + i);
    }

    cout << "\nArray elements:\n";
    printArray(arr, size);

    cout << "\nSum of elements: " << findSum(arr, size) << "\n\n";

    cout << "Swapping two numbers\n";
    int a = 5;
    int b = 8;

    cout << "Before swap\n";
    cout << "a=" << a << "\n";
    cout << "b=" << b << "\n";

    swapValues(&a, &b);

    cout << "After swap\n";
    cout << "a=" << a << "\n";
    cout << "b=" << b << "\n\n";

    cout << "Shifting array to the right...\n";
    shiftRight(arr, size);

    cout << "Array after shiftRight:\n";
    printArray(arr, size);
    cout << "\n";

    cout << "Deleting array...\n";
    deleteArray(arr);
    cout << "Memory released successfully.\n";

    return 0;
}
