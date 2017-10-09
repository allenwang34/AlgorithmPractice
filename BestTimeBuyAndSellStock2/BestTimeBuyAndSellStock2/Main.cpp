#include "Solution.h"
#include<iostream>
#include<vector>

int main() {
	std::vector<int> prices = { 7,1,5,3,6,4 };
	Solution S;
	std::cout << S.maxProfit(prices) << std::endl;
}