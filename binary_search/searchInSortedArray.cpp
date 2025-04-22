#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& arr, int target) {
  int low = 0;
  int high = arr.size() - 1;

  while (low <= high) {
    int mid = low + (high - low) / 2; // To prevent overflow

    if (arr[mid] == target) {
      return mid; 
    } else if (arr[mid] < target) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return -1; 
}

int main() {
  std::vector<int> sortedArray = {2, 5, 7, 8, 11, 12};
  int targetElement = 2;
  int index = binarySearch(sortedArray, targetElement);

  if (index != -1) {
    std::cout << "Element found at index: " << index << std::endl;
  } else {
    std::cout << "Element not found in the array" << std::endl;
  }

  return 0;
}