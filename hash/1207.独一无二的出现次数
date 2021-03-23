class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> num_map;
        map<int,bool> unique_map;


        for(auto &num:arr)
        {
            
            if(num_map.find(num)==num_map.end())
            {
                num_map[num] = 1;
            }
            else
            {
                ++num_map[num];
            }
            // else return false;
        }

        for(auto iter = num_map.begin();iter!=num_map.end();iter++)
        {
            auto show_number = num_map[iter->first];
            if(unique_map.find(show_number) != unique_map.end()) return false;
            else
            {
                unique_map[show_number] = true;            
            }
        }

        return true;
    }
};