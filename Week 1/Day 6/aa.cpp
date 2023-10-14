#include <iostream>
#include <vector>
#include <algorithm>

int countPairsInRange(std::vector<int>& arr, int start_range, int end_range) {
    std::sort(arr.begin(), arr.end());
    int count = 0;

    for (int i = 0; i < arr.size(); i++) {
        int upper_bound_index = std::upper_bound(arr.begin(), arr.end(), end_range - arr[i]) - arr.begin();
        if (upper_bound_index > i) {
            count += (upper_bound_index - i - 1);
        }
    }

    return count;
}

int main() {
    std::vector<int> arr = {16, 11 ,4 ,14 ,7, 6, 16 ,9, 17 ,16, 8};
    int start_range = 11;
    int end_range = 20;

    int result = countPairsInRange(arr, start_range, end_range);
    std::cout << "Total pairs within the range: " << result << std::endl;

    return 0;
}
