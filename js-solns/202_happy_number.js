var isHappy = function(n) {
    const mem = new Map();
    let it = 0;
    while (n != 1){
        n = n.toString().split("");
        n = n.map((x) => Math.pow(Number(x), 2));
        n = n.reduce((a, b) => a + b, 0);
        if (mem.has(n)) {
            return false;
        }
        mem.set(n, it);
    }
    return true;
};