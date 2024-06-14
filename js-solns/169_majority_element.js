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