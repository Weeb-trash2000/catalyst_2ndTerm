#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>
using namespace std;


int lenierSearch(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            cout << "element " << arr[i] << " found at index: " <<  i << '\n';
            return x;
        }
    }
}

int binarySearch(int arr[], int l, int r, int x){
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
        {
            cout << "element " << x <<" found at index: " << mid << '\n';
            return x;
        }
        if (arr[mid] > x)
        {
            binarySearch(arr, l, mid - 1, x);
        }

        else
        {
            binarySearch(arr, mid + 1, r, x);
        }
    }
    else
    {
        cout << "element not found" << '\n';
        return -1;
    }
}