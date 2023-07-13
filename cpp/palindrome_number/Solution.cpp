//
// Created by Ulaş Tüzün on 13.07.2023.
//

#include "Solution.h"


bool Solution::isPalindrome(int x) {
    std::string xStr = std::to_string(x);
    if (xStr.size() < 2)return true;
    if (xStr[0] != xStr[xStr.size() - 1])return false;
    for (int i = 0; i < xStr.size() / 2; i++) {
        if (xStr[i] != xStr[xStr.size() - 1 - i])return false;
    }
    return true;
}
