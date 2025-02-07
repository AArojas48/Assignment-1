//
//  main.cpp
//  Problem 2
//
//  Created by Alexis Rojas on 2/6/25.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int nums[] = {5,7,7,8,8,10};
    int target = 8;
    int first,second;
    
    first = -1;
    second = -1;
    
    int size = sizeof(nums) / sizeof(nums[0]);

    for(int i = 0; i < size; i++) {
        if(nums[i] == target) {
            if(first == -1) {
                first = i;
            }
            second = i;
        }
    }
    cout << "[";
    cout << first << "," << second;
    cout << "]" << endl;
    
    return 0;
}
