//
// Created by Ulaş Tüzün on 13.07.2023.
//

#include "Solution.h"


bool Solution::isValid(std::string s) {
    std::vector<char> stack;
    char parantheses[6] = {'(', ')', '{', '}', '[', ']'};

    if (s.size() % 2 != 0) return false;
    if (s[0] == parantheses[1] || s[0] == parantheses[3] || s[0] == parantheses[5]) return false;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == parantheses[0] || s[i] == parantheses[2] || s[i] == parantheses[4]) {
            stack.push_back(s[i]);
        }
        if (s[i] == parantheses[1] || s[i] == parantheses[3] || s[i] == parantheses[5]) {
            if (stack.empty()) return false;
            if (s[i] == parantheses[1] && stack.back() == parantheses[0]) {
                stack.pop_back();
            } else if (s[i] == parantheses[3] && stack.back() == parantheses[2]) {
                stack.pop_back();
            } else if (s[i] == parantheses[5] && stack.back() == parantheses[4]) {
                stack.pop_back();
            } else {
                return false;
            }
        }
    }
    return stack.empty();
}
