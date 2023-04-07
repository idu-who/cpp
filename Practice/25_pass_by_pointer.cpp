#include <iostream>

enum minMax {
    min_index,
    max_index
};

void minAndMax(int nums[], int n, int *min_max_arr) {
    min_max_arr[min_index] = nums[0];
    min_max_arr[max_index] = nums[0];

    for (int i = 0; i < n; i++) {
        if (nums[i] < min_max_arr[min_index]) {
            min_max_arr[min_index] = nums[i];
        } else if (nums[i] > min_max_arr[max_index]) {
            min_max_arr[max_index] = nums[i];
        }
    }
}

int main() {
    int nums[5]{14, 9, -4, 38, 2};
    int min_max_arr[2];

    minAndMax(nums, 5, min_max_arr);

    std::cout << "min: " << min_max_arr[min_index] << std::endl;
    std::cout << "max: " << min_max_arr[max_index] << std::endl;

    return 0;
}
