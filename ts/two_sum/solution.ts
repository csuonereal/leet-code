export const twoSum = (nums: number[], target: number): number[] => {

    const map: Map<number, number> = new Map();
    for (let i: number = 0; i < nums.length; i++) {
        const complement: number = target - nums[i];
        if (map.has(complement)) {
            return [i, map.get(complement)!];//map.get(complement)! is a non-null assertion operator
        }
        if (!map.has(nums[i]))
            map.set(nums[i], i);
    }
    return [];
};