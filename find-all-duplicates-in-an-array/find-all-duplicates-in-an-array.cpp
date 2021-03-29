 
#include <iostream>
#include<vector>
#include <unordered_map>
using namespace std;

vector<int> findDuplicates(vector<int>& nums) {
    unordered_map<int, int> counts;
    vector<int> elements;
    for (int num : nums) {
        counts[num] = 0;
    }
    for (int num : nums) {
        counts[num] = counts[num] + 1;
    }
    for (auto entry : counts) {
        if (entry.second == 2) {
            elements.push_back(entry.first);
        }
    }
    return elements;
}
int main()
{

}
 