#include <iostream>
#include <vector>

using namespace std;

int linearSearch(const vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) {
            return i;  // Element găsit
        }
    }
    return -1;  // Elementul nu a fost găsit
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    int target = 22;
    int result = linearSearch(arr, target);

    if (result != -1) {
        cout << "Elementul " << target << " a fost găsit la indexul " << result << endl;
    } else {
        cout << "Elementul " << target << " nu a fost găsit." << endl;
    }

    return 0;
}
