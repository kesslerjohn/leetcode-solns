var reverseBits = function(n) {
    n = n.toString(2).split("");
    const filler = new Array(32 - n.length).fill("0");
    n = filler.concat(n);
    n = n.reverse();
    n = n.join("");
    return parseInt(n, 2);
};