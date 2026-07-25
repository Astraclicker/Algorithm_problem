#include <head.h>

class Solution {
public:
    int assignEdgeWeights(vector<vector<int> > &edges) {
        int cnt = 1;
        int current_index = edges.size() - 1;

        int least = edges[current_index][0];
        int current = edges[current_index][1];

        while (least != edges[0][0]) {
            if (least == current) {
                least = edges[current_index][0];
                cnt++;
            }
            current_index--;
            current = edges[current_index][1];
        }
        return cnt;
    }
};
