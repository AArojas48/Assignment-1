//
//  Problem1.cpp
//  TwoSum
//
//  Created by Alexis Rojas on 2/3/25.
//

#include <iostream>
#include <array>

using namespace std;

int main(int argc, const char * argv[]) {
    int nums[] = {2,7,11,15};
    int target = 9;
    
    int size = sizeof(nums) / sizeof(nums[0]);
    cout << "[";
    
    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {
        if(nums[i] + nums[j] == target) {
           cout << i << "," << j; 
        }
        }
    }
    cout << "]";
    cout << endl;
    return 0;
}
