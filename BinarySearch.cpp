#include "binarySearch.h"

int main() 
{
    int intArr[] = {1, 3, 5, 7, 9};
    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    std:: cout << "Index of 7 in int array: " << binarySearch(intArr, intSize, 7) << std:: endl;

    double doubleArr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int doubleSize = sizeof(doubleArr) / sizeof(doubleArr[0]);
    std:: cout << "Index of 4.4 in double array: " << binarySearch(doubleArr, doubleSize, 4.4) << std:: endl;

    std:: string strArr[] = {"apple", "banana", "cherry", "date", "fig"};
    int strSize = sizeof(strArr) / sizeof(strArr[0]);
    std:: cout << "Index of 'cherry' in string array: " << binarySearch(strArr, strSize, string("cherry")) << std:: endl;

    return 0;
}
