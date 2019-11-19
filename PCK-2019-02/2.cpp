#include <iostream>
#include <vector>
using namespace std;

int main() {
    int lane,info_num;
    vector<int> info_nums;
    vector<int> content_num;
    vector<bool> lane_info;
    lane_info[0] = false;
    lane_info[1] = false;

    cin >> lane >> info_num;
    for(int i=0;i<info_num;i++){
        int f,content;
        cin >> f >> content;
        info_nums.push_back(f);
        content_num.push_back(content);
    }
    for(int i=0;i<info_num;i++){
        if(info_nums[i]==1){
            //入場
            if(lane_info[0] == false){
                lane_info[0] = true;
            }else{
                lane_info[1] = true;
            }
        }else if(info_nums[i]==0){
            //出場
        }
    }
}