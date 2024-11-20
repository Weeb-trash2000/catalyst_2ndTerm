#include <chrono>
#include "sortingAlgorithms.cpp"

int main()
{
    srand(time(0)); // Initialize random number generator.

    int arr100[100];
    int arr1000[1000];
    int arr10000[10000];

    // Fill arr100 with random numbers
    for (int i = 0; i < 100; i++)
    {
        arr100[i] = rand() % 100;
    }

    // Fill arr1000 with random numbers
    for (int i = 0; i < 1000; i++)
    {
        arr1000[i] = rand() % 1000;
    }

    // Fill arr10000 with random numbers
    for (int i = 0; i < 10000; i++)
    {
        arr10000[i] = rand() % 10000;
    }

// bubble sort 

    //  auto start = std::chrono::high_resolution_clock::now();
    // bubbleSort(arr100, 100);
    // auto stop = std::chrono::high_resolution_clock::now();
    // auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    // std::cout << "Time taken by function: " << duration.count() << " microseconds" << std::endl;
    // cout << "Sorted array of 100 elements: ";

    // auto start = std::chrono::high_resolution_clock::now();
    // bubbleSort(arr1000, 1000);
    // auto stop = std::chrono::high_resolution_clock::now();
    // auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    // std::cout << "Time taken by function: " << duration.count() << " microseconds" << std::endl;
    // cout << "Sorted array of 1000 elements: ";

    // auto start = std::chrono::high_resolution_clock::now();
    // bubbleSort(arr10000, 10000);
    // auto stop = std::chrono::high_resolution_clock::now();
    // auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    // std::cout << "Time taken by function: " << duration.count() << " microseconds" << std::endl;
    // cout << "Sorted array of 10000 elements: ";

//quick sort

    // auto start = std::chrono::high_resolution_clock::now();
    // quickSort(arr100, 0, 100);
    // auto stop = std::chrono::high_resolution_clock::now();
    // auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    // std::cout << "Time taken by function: " << duration.count() << " microseconds" << std::endl;
    // cout << "Sorted array of 100 elements: ";

    // auto start = std::chrono::high_resolution_clock::now();
    // quickSort(arr1000, 0, 1000);
    // auto stop = std::chrono::high_resolution_clock::now();
    // auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    // std::cout << "Time taken by function: " << duration.count() << " microseconds" << std::endl;
    // cout << "Sorted array of 1000 elements: ";

    // auto start = std::chrono::high_resolution_clock::now();
    // quickSort(arr10000, 0, 10000);
    // auto stop = std::chrono::high_resolution_clock::now();
    // auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    // std::cout << "Time taken by function: " << duration.count() << " microseconds" << std::endl;
    // cout << "Sorted array of 10000 elements: ";


//merge Sort


    //  auto start = std::chrono::high_resolution_clock::now();
    // mergeSort(arr100, 0, 100);
    // auto stop = std::chrono::high_resolution_clock::now();
    // auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    // std::cout << "Time taken by function: " << duration.count() << " microseconds" << std::endl;
    // cout << "Sorted array of 100 elements: ";

    // auto start = std::chrono::high_resolution_clock::now();
    // mergeSort(arr1000, 0, 1000);
    // auto stop = std::chrono::high_resolution_clock::now();
    // auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    // std::cout << "Time taken by function: " << duration.count() << " microseconds" << std::endl;
    // cout << "Sorted array of 1000 elements: ";

    // auto start = std::chrono::high_resolution_clock::now();
    // mergeSort(arr10000, 0, 10000);
    // auto stop = std::chrono::high_resolution_clock::now();
    // auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    // std::cout << "Time taken by function: " << duration.count() << " microseconds" << std::endl;
    // cout << "Sorted array of 10000 elements: ";


// insertion Sort

    //  auto start = std::chrono::high_resolution_clock::now();
    // insertionSort(arr100, 100);
    // auto stop = std::chrono::high_resolution_clock::now();
    // auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    // std::cout << "Time taken by function: " << duration.count() << " microseconds" << std::endl;
    // cout << "Sorted array of 100 elements: ";

    // auto start = std::chrono::high_resolution_clock::now();
    // insertionSort(arr1000, 1000);
    // auto stop = std::chrono::high_resolution_clock::now();
    // auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    // std::cout << "Time taken by function: " << duration.count() << " microseconds" << std::endl;
    // cout << "Sorted array of 1000 elements: ";

    auto start = std::chrono::high_resolution_clock::now();
    insertionSort(arr10000, 10000);
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    std::cout << "Time taken by function: " << duration.count() << " microseconds" << std::endl;
    cout << "Sorted array of 10000 elements: ";



// selection sort

    // auto start = std::chrono::high_resolution_clock::now();
    // selectionSort(arr100, 100);
    // auto stop = std::chrono::high_resolution_clock::now();
    // auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    // std::cout << "Time taken by function: " << duration.count() << " microseconds" << std::endl;
    // cout << "Sorted array of 100 elements: ";

    // auto start = std::chrono::high_resolution_clock::now();
    // selectionSort(arr1000, 1000);
    // auto stop = std::chrono::high_resolution_clock::now();
    // auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    // std::cout << "Time taken by function: " << duration.count() << " microseconds" << std::endl;
    // cout << "Sorted array of 1000 elements: ";

    // auto start = std::chrono::high_resolution_clock::now();
    // selectionSort(arr10000, 10000);
    // auto stop = std::chrono::high_resolution_clock::now();
    // auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    // std::cout << "Time taken by function: " << duration.count() << " microseconds" << std::endl;
    // cout << "Sorted array of 10000 elements: ";



    return 0;
}