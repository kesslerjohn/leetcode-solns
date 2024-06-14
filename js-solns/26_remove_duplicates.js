var removeDuplicates = function(nums) {
    let temp = []
    let prev = nums[0]
    temp.push(prev)
    for (let i = 1; i < nums.length; i++) {
        if (nums[i] != prev){
            temp.push(nums[i])
        }
        prev = nums[i]
    }
    let j = 0
    temp.forEach(e => {
        nums[j++] = e
    })
    return temp.length
};