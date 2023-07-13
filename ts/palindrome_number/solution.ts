export const isPalindrome = (x: number): boolean => {
    let xStr: string = x.toString();
    if (xStr.length < 2) return true;
    if (xStr[0] != xStr[xStr.length - 1]) return false;

    let xStrReversed: string = xStr.split('').reverse().join('');
    if (xStr != xStrReversed) return false;

    return true;

}



//"123"
//"123".split('')=['1','2','3']
//"123".split('').reverse()=['3','2','1']
//"123".split('').reverse().join('')=321