var containsNearbyDuplicate = function(nums, k) {
    const mem = new Map();
    for (let i = 0; i < nums.length; i++) {
        if (i - mem.get(nums[i]) <= k) {
            return true;
        }
        mem.set(nums[i], i);
    }
    return false;
}