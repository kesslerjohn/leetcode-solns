#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sumgas = std::accumulate(gas.begin(), gas.end(), 0);
        int sumcost = std::accumulate(cost.begin(), cost.end(), 0);
        if (sumgas < sumcost){
            return -1;
        }

        int sz = gas.size();
        int surplus = 0;
        int start = 0;
        for (int i = 0; i < sz; i++){
            surplus += gas[i] - cost[i];
            if (surplus < 0){
                surplus = 0;
                start = i+1;
            }
        }
        return start;
    }
};

int main(int argc, char* argv[]){

}