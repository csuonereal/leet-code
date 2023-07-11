"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
exports.isValid = void 0;
const isValid = (s) => {
    const map = new Map();
    map.set('(', ')');
    map.set('{', '}');
    map.set('[', ']');
    const stack = [];
    for (let i = 0; i < s.length; i++) {
        const parenthese = s.charAt(i);
        if (map.has(parenthese)) {
            stack.push(parenthese);
        }
        else if (stack.length === 0 || map.get(stack.pop()) !== parenthese) {
            return false;
        }
    }
    return stack.length === 0;
};
exports.isValid = isValid;
