#include"Solution.h"
#include<vector>


int Solution::maxProfit(std::vector<int>& prices) {
	int minPri;
	int maxPro = 0;
	for (std::vector<int>::iterator it = prices.begin(); it != prices.end(); it++) {
		if (it == prices.begin()) {
			minPri = *it;
		}
		else if (*it <= minPri) {
			minPri = *it;
		}
		if (*it - minPri >= maxPro) {
			maxPro = *it - minPri;
		}
	}
	return maxPro;
}