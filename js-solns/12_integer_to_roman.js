var intToRoman = function(num) {
    num = num.toString().split("").reverse();
    const conv = [["", "I", "II", "III", "IV", "V",
                    "VI", "VII", "VIII", "IX"],
                ["", "X", "XX", "XXX", "XL", "L",
                    "LX", "LXX", "LXXX", "XC"],
                ["", "C", "CC", "CCC", "CD", "D",
                        "DC", "DCC", "DCCC", "CM"],
                ["", "M", "MM", "MMM"]
            ];
    let res = []
    for (let i = 0; i < num.length; i++) {
        res.push(conv[i][Number(num[i])]);
    }
    return res.reverse().join("");
};