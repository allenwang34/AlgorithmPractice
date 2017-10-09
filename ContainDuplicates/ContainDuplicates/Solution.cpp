#include "Solution.h"
#include <vector>
#include <algorithm>

bool Solution::conatinsDuplicate(std::vector<int>& nums) {
	std::sort(nums.begin(), nums.end());
	for (std::vector<int>::iterator it = nums.begin(); it < nums.end()-1; it++) {
		if (*it == *(it + 1))
			return true;
	}
	return false;
}