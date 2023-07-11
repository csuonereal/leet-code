export const lengthOfLastWord = (s: string): number => {
    //s.trim(); pythondaki strip gibi
    s = s.trim();
    if (s === "") {
        return 0;
    }
    let strs: string[] = s.split(" ");
    //strs = strs.filter((str) => str !== ""); trim kullanmasaydım bunu kullanacaktım
    return strs[strs.length - 1].length;
};

