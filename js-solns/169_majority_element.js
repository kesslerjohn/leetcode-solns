var majorityElement = function(nums) {
    let track = {}
    let res
    const maj = Math.floor(nums.length/2)
    nums.forEach(e => {track[e] = 0})
    nums.forEach(e => {
        track[e]++
        if (track[e] > maj) {
            res = e
            return e
        }
    })
    return res
};

var majorityElementCSpace = function(nums) {
    nums.sort((a, b) => {return a - b})
    const maj = Math.floor(nums.length/2)
    let prev = nums[0]
    let count = 1
    let res = prev
    for (let i = 1; i < nums.length; i++){
        if (nums[i] === prev){
            count++
            if (count > maj){
                res = nums[i]
                return res
            }
        } else {
            prev = nums[i]
            count = 1
        }
    }
    return res
}