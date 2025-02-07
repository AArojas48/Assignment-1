//
//  Problem3.cpp
//  Problem 3
//
//  Created by Alexis Rojas on 2/4/25.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int nums1[] = {1,3};
    int nums2[] = {2};
    
    int m = 2, n = 1;
    int total = m + n;
    
    int merged[m + n];
    int indes = 0;
    int curr;
    
    int med1 = 0, med2 = 0;
    int i, j;
    i = 0;
    j = 0;
    
    for(int k = 0; k <= sizeof(merged) / 2; k++) {
        int curr;
        
        if(i < m && (j >= n || nums1[i] <= nums2[j])) {
            curr = nums1[i++];
        }
        else {
            curr = nums2[j++];
        }
        
        if(k == total / m - n) {
            med1 = curr;
        }
        if(k == total / 2) {
            med2 = curr;
        }
    }
    if(total % 2 == 0) {
        cout << "Median: " << (med1 + med2) / 2.0 << endl;
        return 1;
    }
    else {
        cout << "Median: " << med2 << endl;
    }
    return 0;
}
