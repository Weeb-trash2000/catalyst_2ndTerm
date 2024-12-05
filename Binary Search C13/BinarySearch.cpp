#include <iostream>
#include <array>
#include <cstdlib>
#include <chrono>
#include <ctime>
using namespace std;

int lenierSearch(int arr[], int n, int x)
{
    auto start = std::chrono::high_resolution_clock::now();

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            auto stop = std::chrono::high_resolution_clock::now();
            auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
            std::cout << "Time taken by linier sort: " << duration.count() << " microseconds" << std::endl;
            cout << "element " << arr[i] << " found at index: " << i << '\n';

            return x;
        }
    }

    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    std::cout << "Time taken by linier sort: " << duration.count() << " microseconds" << std::endl;
    cout << "element not found" << '\n';
    return -1;
}

int binarySearch(int arr[], int l, int r, int x)

{
    auto start = std::chrono::high_resolution_clock::now();
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
        {
            auto stop = std::chrono::high_resolution_clock::now();
            auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
            std::cout << "Time taken by binary sort: " << duration.count() << " microseconds" << std::endl;
            cout << "element " << x << " found at index: " << mid << '\n';
            return mid;
        }
        if (arr[mid] > x)
        {
            return binarySearch(arr, l, mid - 1, x);
        }

        else
        {
            return binarySearch(arr, mid + 1, r, x);
        }
    }
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    std::cout << "Time taken by binary sort: " << duration.count() << " microseconds" << std::endl;
    cout << "element not found" << '\n';
    return -1;
}
