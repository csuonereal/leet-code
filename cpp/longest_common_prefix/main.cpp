#include <iostream>
#include "Solution.h"

int main() {
    Solution *s = new Solution();
    std::vector<std::string> input = {"flower", "flow", "flight"};
    std::cout << s->longestCommonPrefix(input);
    return 0;
}
