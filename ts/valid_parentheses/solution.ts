export const isValid = (s: string): boolean => {
    const map: Map<string, string> = new Map();
    map.set('(', ')');
    map.set('{', '}');
    map.set('[', ']');

    const stack: string[] = [];
    for (let i = 0; i < s.length; i++) {
        const parenthese: string = s.charAt(i)
        if (map.has(parenthese)) {
            stack.push(parenthese);
        } else if (stack.length === 0 || map.get(stack.pop()!) !== parenthese) {
            return false;
        }
    }
    return stack.length === 0;
}
