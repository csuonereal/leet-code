#include <iostream>
#include <vector>
#include "Solution.h"

int main() {
    Solution *s = new Solution();
    std::vector<int> input = {2, 7, 11, 15};
    std::vector<int> toBePrinted = s->twoSum(input, 9);
    std::cout << "[";
    for (int i = 0; i < toBePrinted.size(); i++) {
        std::cout << toBePrinted.at(i);
        if (i < toBePrinted.size() - 1) {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;
}
