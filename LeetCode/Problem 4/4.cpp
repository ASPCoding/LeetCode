class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int combined_size = (nums1.size() + nums2.size());
        auto it1 = nums1.begin();
        auto it2 = nums2.begin();
        int index = 0;
        double val;
        while(index < combined_size/2){
            if(it1 != nums1.end() && it2 != nums2.end()){
                if(*it1 > *it2){
                    val = *it2; 
                    ++it2;
                    ++index;
                }
                else if(*it1 < *it2){
                    val = *it1;
                    ++it1;
                    ++index;
                }
                else{
                    val = *it1;
                    ++it1;
                    ++index;
                }
            }
            else if(it1 == nums1.end()){
                val = *it2;
                ++it2;
                ++index;
            }
            else{
                val = *it1;
                ++it1;
                ++index;
            }
        }
        if(combined_size%2 == 1){
            if(it1 == nums1.end()){
                return *it2;
            }
            else if(it2 == nums2.end()){
                return *it1;
            }
            else{
                return (*it1>*it2?*it2:*it1);
            }
        }
        else{
            if(it1 == nums1.end()){
                return (val + *it2)/2;
            }
            else if(it2 == nums2.end()){
                return (val + *it1)/2;
            }
            else{
                return (val + (*it1>*it2?*it2:*it1))/2;
            }
        }
    }
};