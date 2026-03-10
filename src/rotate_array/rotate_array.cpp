#include "rotate_array.h"
using namespace rotate_array;

void Solution::rotateBruteForce(std::vector<int>& nums, int k) {
  int n = nums.size();
  if (n == 0) {
    return;
  }
  int move = int((k % n + n ) % n);
  if (move == 0) {
    return;
  }

  std::vector<int> tail(nums.begin() + n - move, nums.end());

  for (int i = 0; i < move; i++) {
    nums.pop_back();
  }

  nums.insert(nums.begin(), tail.begin(), tail.end());
}

void Solution::rotateTripleReverse(std::vector<int>& nums, int k) {
  auto reverse = [](std::vector<int>& nums, int start, int end) {
    while (start < end) {
      std::swap(nums[start], nums[end]);
      start++;
      end--;
    }
  };

  int n = nums.size();
  if (n == 0) {
    return;
  }
  int move = int((k % n + n) % n);
  if (move == 0) {
    return;
  }

  reverse(nums, 0, n - 1);
  reverse(nums, 0, move - 1);
  reverse(nums, move, n - 1);
}

