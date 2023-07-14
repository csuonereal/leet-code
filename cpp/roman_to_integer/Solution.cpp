//
// Created by Ulaş Tüzün on 14.07.2023.
//

#include "Solution.h"


int Solution::romanToInt(std::string s) {
    std::unordered_map<char, int> romanNumeralMap = {{'I', 1},
                                                     {'V', 5},
                                                     {'X', 10},
                                                     {'L', 50},
                                                     {'C', 100},
                                                     {'D', 500},
                                                     {'M', 1000}};
    int result = 0;
    for (int i = 0; i < s.size(); i++) {
        if (i < s.size() - 1 && romanNumeralMap.at(s.at(i)) < romanNumeralMap.at(s.at(i + 1))) {
            result -= romanNumeralMap.at(s.at(i));
        } else {
            result += romanNumeralMap.at(s.at(i));
        }
    }
    return result;
}

/*
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
*/