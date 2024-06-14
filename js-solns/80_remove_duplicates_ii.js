var removeDuplicates = function(nums) {
    let pointer = 1
    let counter = 1
    let prev = nums[0]
    for (let i = 1; i < nums.length; i++) {
        if (nums[i] === prev) {
            counter++
        } else {
            counter = 1
            prev = nums[i]
        }
        if (counter < 3) {
            nums[pointer++] = nums[i]
        }
    }
    return pointer
};