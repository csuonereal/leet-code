"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
exports.longestCommonPrefix = void 0;
const checkAllStringsContainCharAtIndex = (strs, index) => {
    for (let i = 0; i < strs.length; i++) {
        if (strs[i][index] !== strs[0][index]) {
            return false;
        }
    }
    return true;
};
const isAllConditionsOK = (strs) => {
    if (strs.includes('')) {
        return false;
    }
    if (strs.length === 0) {
        return false;
    }
    for (let i = 0; i < strs.length; i++) {
        if (strs[0][0] !== strs[i][0]) {
            return false;
        }
    }
    return true;
};
const longestCommonPrefix = (strs) => {
    let prefix = '';
    let smallest = strs[0].length;
    for (let i = 0; i < strs.length; i++) {
        if (strs[i].length < smallest) {
            smallest = strs[i].length;
        }
    }
    if (!isAllConditionsOK(strs)) {
        return prefix;
    }
    for (let i = 0; i < smallest; i++) {
        if (checkAllStringsContainCharAtIndex(strs, i)) {
            prefix += strs[0][i];
        }
        else {
            break;
        }
    }
    return prefix;
};
exports.longestCommonPrefix = longestCommonPrefix;
