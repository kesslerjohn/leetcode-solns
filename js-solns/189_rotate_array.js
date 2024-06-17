var rotateOne = function(nums, k) {
    const sz = nums.length
    let temp = nums[sz-1]
    for (var i = sz-2; i >= 0; i--) {
        nums[i+1] = nums[i]
    }
    nums[0] = temp
}

// O(k*n) time, gets TLE on leetcode
// O(1) extra space to store temp
var rotateSlow = function(nums, k) {
    for (let i = 0; i < k; i++){
        rotateOne(nums)
    }
};

// O(n) time and space
var rotate = function(nums, k) {
    const sz = nums.length
    k = k % sz
    const suffix = nums.slice(sz - k, sz)
    for (let i = 0; i < (sz-k); i++) {
        suffix.push(nums[i])
    }
    for (let i = 0; i < sz; i++) {
        nums[i] = suffix[i]
    }
}