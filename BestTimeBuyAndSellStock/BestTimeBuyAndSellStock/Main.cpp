#include <iostream>
#include "Solution.h"
#include <vector>

int main() {
	Solution S;
	//std::vector<int> myVector = { 7,6,4,3,1 };
	std::vector<int> myVector = { 7,1 };
	int maxPro = S.maxProfit(myVector);
	std::cout << maxPro << std::endl;
	
}