#include <iostream>
#include "ArrayTests.h"

int main()
{
    std::cout << "Enter a positive integer: ";
    int length;
    std::cin >> length;

    int *array = new int[length]; // use array new.  Note that length does not need to be constant!

    std::cout << "I just allocated an array of integers of length " << length << '\n';

    alterArray(array);



    std::cout << array[0];
    delete[] array; // use array delete to deallocate array
    array = 0; // use nullptr instead of 0 in C++11

    return 0;
}
