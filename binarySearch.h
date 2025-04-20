#include <iostream>
#include <string>
using namespace std;

template <typename T>
int binarySearch(T arr[], int size, T key) 
{
    int low = 0;
    int high = size - 1;

    while (low <= high) 
    {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1; 
}
