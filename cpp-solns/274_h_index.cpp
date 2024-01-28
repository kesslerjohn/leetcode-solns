using namespace std;
/*
Description from leetcode:
Given an array of integers citations where citations[i] is the number of 
citations a researcher received for their ith paper, return the researcher's 
h-index.

According to the definition of h-index on Wikipedia: The h-index is defined as 
the maximum value of h such that the given researcher has published at least h 
papers that have each been cited at least h times.

=-=-=-=-=-=-=
Solution:
=-=-=-=-=-=-=
*/

class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end());
        int h = 0;
        for (int i = 0; i < citations.size(); i++){
            if (citations.size() - i <= citations[i]){
                int c = citations.size() - i;
                h = max(h, c);
            }
        }
        return h;
    }
};
