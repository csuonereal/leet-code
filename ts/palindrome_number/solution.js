"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
exports.isPalindrome = void 0;
const isPalindrome = (x) => {
    let xStr = x.toString();
    if (xStr.length < 2)
        return true;
    if (xStr[0] != xStr[xStr.length - 1])
        return false;
    let xStrReversed = xStr.split('').reverse().join('');
    if (xStr != xStrReversed)
        return false;
    return true;
};
exports.isPalindrome = isPalindrome;
