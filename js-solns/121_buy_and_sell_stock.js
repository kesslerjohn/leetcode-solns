var maxProfit = function(prices) {
    let buy = prices[0]
    let profit = 0
    prices.forEach(price => {
        if (price < buy) {
            buy = price
        }
        if ((price - buy) > profit) {
            profit = price - buy
        }
    })
    return profit
}