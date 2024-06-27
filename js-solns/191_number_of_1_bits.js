var hammingWeight = function(n) {
    n = n.toString(2).split("");
    n = n.reduce((a, b) => Number(a) + Number(b), 0);
    return n;
};