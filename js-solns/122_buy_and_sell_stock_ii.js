var maxProfit = function(prices) {
    let max = 0;
    let start = prices[0];

    for (let p of prices){
        if (p > start) {
            max += p - start;
        }
        start = p;
    }
    return max;
}