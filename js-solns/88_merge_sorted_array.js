var merge = function(nums1, m, nums2, n) {
    nums2.forEach(e => {
        nums1[m] = e
        m++
        })
    nums1.sort((a, b) => {return a - b})
};