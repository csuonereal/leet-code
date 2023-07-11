const checkAllStringsContainCharAtIndex = (strs: string[], index: number): boolean => {
    for (let i: number = 0; i < strs.length; i++) {
        if (strs[i][index] !== strs[0][index]) {
            return false;
        }
    }
    return true;
}
const isAllConditionsOK = (strs: string[]): boolean => {

    if (strs.includes('')) {
        return false;
    }
    if (strs.length === 0) {
        return false;
    }
    for (let i: number = 0; i < strs.length; i++) {
        if (strs[0][0] !== strs[i][0]) {
            return false;
        }
    }
    return true;
}
export const longestCommonPrefix = (strs: string[]): string => {

    let prefix: string = '';
    let smallest: number = strs[0].length;
    for (let i: number = 0; i < strs.length; i++) {
        if (strs[i].length < smallest) {
            smallest = strs[i].length;
        }
    }
    if (!isAllConditionsOK(strs)) {
        return prefix;
    }
    for (let i: number = 0; i < smallest; i++) {
        if (checkAllStringsContainCharAtIndex(strs, i)) {
            prefix += strs[0][i];
        } else {
            break;
        }
    }
    return prefix;
};