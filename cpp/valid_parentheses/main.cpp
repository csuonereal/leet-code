#include <iostream>
#include "Solution.h"

int main() {
    Solution *s = new Solution();
    std::cout << s->isValid("()") << std::endl;
}
