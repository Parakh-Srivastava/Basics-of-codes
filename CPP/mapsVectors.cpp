#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>

using std :: cin;
using std :: cout;
using std :: endl;
using std :: vector;
using std :: unordered_map;

std :: vector<int> find(std::vector<int> nums,int target)
{
    int i,b;
    unordered_map<int,int> storeNum;
    vector<int> solution;
    for(i = 0; i < nums.size(); i++)
    {
        storeNum.insert({nums[i],i});
    }
    for(i = 0; i < nums.size();i++)
    {
        auto it = storeNum.find(target - nums[i]);
        if(it != storeNum.end() && nums[i] != i)
        {
            return {i, it ->second};
        }
    }
    return {};
}

int main()
{
    vector<int> nums = {2,3,4,5,6,7,8,19};
    int target = 21;
    vector<int> solution = find(nums,target);
    for(int i = 0; i <= solution.size(); i++)
    {
        if(i % 2 == 0)
        {
            cout << solution[i] << " ";
        }
        else
        {
            cout << solution[i] << endl;
        }
    }
    return 0;
}