#ifndef SELECTION_HPP
#define SELECTION_HPP
#include <array>
using namespace std;
template <size_t N>
void selectionSort(array<int,N>& arr) {
    int n = arr.size();
    // TODO: implement selection sort
    // Hint: for each i, track minIndex, then swap arr[i] and arr[minIndex]
    for(int i = 0; i < n - 1; i++){
        int minIndex = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}
#endif