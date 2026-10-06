#include<iostream>
#include<vector>
using namespace std;
int removeDuplicates(vector<int>& nums){
    int i=0;
    int j =1;

    while(j<nums.size()){
        if(nums[i] != nums[j]){
            i++;
            nums[i] = nums[j];
        }
        j++;
    }
    return i+1;
}



int main(){
    vector <int> nums={1,1,2,2,3,3,4,4,4,5,6,6,7,7,7,7,7};
    int k= removeDuplicates(nums);

    cout<<"Array after removing duplicates: ";
    int i=0;
    while (i<k){
        cout <<nums[i]<<"";
        i++;
    }

    return 0;
}