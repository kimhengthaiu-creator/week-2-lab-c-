#include <iostream>
using namespace std;
#include <iostream>
#include <chrono>
#include <array>
#include "bubble.hpp"
using namespace std;
using namespace std::chrono;
int main() {
 array<int,5> arr = {5, 3, 8, 1, 2};
//start timer
 auto start = chrono::high_resolution_clock::now();
bubbleSort(arr);
// STOP TIMER
auto end = chrono::high_resolution_clock::now();
// CALCULATE TIME
auto duration = chrono::duration_cast<chrono::microseconds>(end - start);
cout << "Sorting time: " << duration.count() << " microseconds\n";
}
// int main() {

//     // Trial 1
//     array<int, 100> arr1;
//     for (int i = 0; i < 100; i++) {
//         arr1[i] = 100 - i;
//     }

//     auto start1 = high_resolution_clock::now();
//     bubbleSort(arr1);
//     auto end1 = high_resolution_clock::now();

//     cout << "Trial 1 - n = 100: "
//          << duration_cast<microseconds>(end1 - start1).count()
//          << " microseconds" << endl;

// }

// int main() {

//     // Trial 2
//     array<int, 500> arr1;
//     for (int i = 0; i < 500; i++) {
//         arr1[i] = 500 - i;
//     }

//     auto start1 = high_resolution_clock::now();
//     bubbleSort(arr1);
//     auto end1 = high_resolution_clock::now();

//     cout << "Trial 2 - n = 500: "
//          << duration_cast<microseconds>(end1 - start1).count()
//          << " microseconds" << endl;

// }

// int main() {

//     // Trial 3
//     array<int, 1000> arr1;
//     for (int i = 0; i < 1000; i++) {
//         arr1[i] = 1000 - i;
//     }

//     auto start1 = high_resolution_clock::now();
//     bubbleSort(arr1);
//     auto end1 = high_resolution_clock::now();

//     cout << "Trial 3 - n = 1000: "
//          << duration_cast<microseconds>(end1 - start1).count()
//          << " microseconds" << endl;

// }

// int main() {

//     // Trial 4
//     array<int, 5000> arr1;
//     for (int i = 0; i < 5000; i++) {
//         arr1[i] = 5000 - i;
//     }

//     auto start1 = high_resolution_clock::now();
//     bubbleSort(arr1);
//     auto end1 = high_resolution_clock::now();

//     cout << "Trial 4 - n = 5000: "
//          << duration_cast<microseconds>(end1 - start1).count()
//          << " microseconds" << endl;

// }

int main() {

    // Trial 5
    array<int, 10000> arr1;
    for (int i = 0; i < 10000; i++) {
        arr1[i] = 10000 - i;
    }

    auto start1 = high_resolution_clock::now();
    bubbleSort(arr1);
    auto end1 = high_resolution_clock::now();

    cout << "Trial 5 - n = 10000: "
         << duration_cast<microseconds>(end1 - start1).count()
         << " microseconds" << endl;

}