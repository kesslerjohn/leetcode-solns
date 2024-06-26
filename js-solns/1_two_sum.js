var twoSumFast = function(nums, target) {
    let mem = new Map();
    for (let i = 0; i < nums.length; i++) {
        let complement = target - nums[i];
        if (mem.has(complement)) {
            return [mem.get(complement), i];
        }
        mem.set(nums[i], i)
    }
}


// this slower solution brute forces the prob,
// and does not get TLE on leetcode
var twoSumSlow = function(nums, target) {
    for (let i = 0; i < nums.length; i++) {
        for (let j = 0; j < nums.length; j++) {
            if ((nums[i] + nums[j] === target) && (i != j)){
                return [i, j];
            }
        }
    }
};