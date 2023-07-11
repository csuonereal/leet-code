"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
exports.lengthOfLastWord = void 0;
const lengthOfLastWord = (s) => {
    //s.trim(); pythondaki strip gibi
    if (s.trim() === "") {
        return 0;
    }
    let strs = s.split(" ");
    //strs = strs.filter((str) => str !== ""); trim kullanmasaydım bunu kullanacaktım
    return strs[strs.length - 1].length;
};
exports.lengthOfLastWord = lengthOfLastWord;
