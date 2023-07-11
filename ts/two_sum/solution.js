"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
exports.twoSum = void 0;
const twoSum = (nums, target) => {
    const map = new Map();
    for (let i = 0; i < nums.length; i++) {
        const complement = target - nums[i];
        if (map.has(complement)) {
            return [i, map.get(complement)]; //map.get(complement)! is a non-null assertion operator
        }
        if (!map.has(nums[i]))
            map.set(nums[i], i);
    }
    return [];
};
exports.twoSum = twoSum;
