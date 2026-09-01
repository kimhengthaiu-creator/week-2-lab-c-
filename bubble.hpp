#ifndef BUBBLESORT_HPP
#define BUBBLESORT_HPP
#include <array>
using namespace std;
template <size_t N>
void bubbleSort(array<int,N>& arr) {
    int n = arr.size();
    // TODO: implement bubble sort
    // Hint: nested loop, swap arr[j] and arr[j+1] if arr[j] > arr[j+1]
    for(int i = 0; i < n-1;i++){
        for(int j = 0; j < n-i-1 ; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j +1] = temp;
            }
        }
    }
}
#endif
