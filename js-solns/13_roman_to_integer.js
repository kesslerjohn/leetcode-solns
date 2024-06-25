var romanToInt = function(s) {
    const c_dict = {
        "I" : 1,
        "V" : 5,
        "X" : 10,
        "L" : 50,
        "C" : 100,
        "D" : 500,
        "M" : 1000
    };
    let c_list = [];
    s = s.split("");
    for (let i = 0; i < s.length; i++){
        if ((i+1 < s.length) && (c_dict[s[i]] < c_dict[s[i+1]])){
            c_list.push(-1*Number(c_dict[s[i]]));
        } else {
            c_list.push(Number(c_dict[s[i]]));
        }
    }
    out = c_list.reduce((a, b) => a + b, 0);
    return out;
}