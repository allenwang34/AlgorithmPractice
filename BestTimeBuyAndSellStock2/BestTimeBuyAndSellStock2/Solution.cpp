#include "Solution.h"
#include<vector>

int Solution::maxProfit(std::vector<int>& prices) {
	int totalPro = 0;
	int minPri;
	for (std::vector<int>::iterator it = prices.begin(); it != prices.end(); it++) {
		if (it == prices.begin()) {
			minPri = *it;
		}
		else if (*it < minPri) {
			minPri = *it;
		}
		if (*it - minPri > 0) {
			totalPro += *it - minPri;
			minPri = *it;
		}
	}
	return totalPro;
}