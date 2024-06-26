var isValid = function(s) {
    const match = {
        "]" : "[",
        ")" : "(",
        "}" : "{"
    };
    const open = Object.values(match);
    const stack = [];
    s = s.split("");
    for (bracket of s) {
        let top = stack.length-1;
        if (open.includes(bracket)) {
            stack.push(bracket);
        }
        else if (match[bracket] == stack[top]) {
            stack.pop();
        } else {
            return false;
        }
    }
    return stack.length === 0;
}