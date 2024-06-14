var removeElement = function(nums, val) {
    let temp = []
    nums.forEach(e => {
        if (e != val) {
            temp.push(e)
        }
    })
    let i = 0
    temp.forEach(e => {
        nums[i++] = e
    })
    return temp.length
};