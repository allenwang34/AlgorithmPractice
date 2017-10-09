#include <iostream>
#include <vector>
#include "Solution.h"

int main() {
	std::vector<int> nums = { 7,1,5,4,8,2,7 };
	Solution S;
	std::cout << S.conatinsDuplicate(nums) << std::endl;
}