#include<iostream>
using namespace std;

int binarysearch(int arr[], int n, int num); 

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int num = 5; 
    int index = binarysearch(arr, n, num);  
    cout << index;
    return 0;
}
int binarysearch(int arr[], int n, int num) {
    int start = 0, end = n - 1; 
    while (start <= end) {
        int mid = (start + end) / 2;
        if (arr[mid] == num) {
            return mid;
        } else if (num < arr[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return -1; 
}
