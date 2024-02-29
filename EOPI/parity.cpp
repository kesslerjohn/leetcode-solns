#include <iostream>
using namespace std;

class Solution {
public:
    int parity(int n){
        int x = n & ~(n-1);
        return x;
    };
};

int main(int argc, char* argv[]){
    if (argc < 2){
        cout << "too few arguments" << endl;
        return 1;
    }
    cout << argv[1] << endl;
    return 0;
}