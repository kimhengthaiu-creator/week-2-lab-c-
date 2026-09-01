#ifndef INSERTION_HPP
#define INSERTION_HPP
#include <array>
using namespace std;
template <size_t N>
void insertionSort(array<int,N>& arr) {
    int n = arr.size();
    // TODO: implement insertion sort
    // Hint: for i from 1 to n-1, save arr[i] as key, shift elements > key rightward
    for(int i = 0; i < n - 1; i++){
        int key = arr[i];
        int j = i - 1;
        while( j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
#endif