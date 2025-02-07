# Assignment-1

1) For this problem, since you have to find all possible pairs of nums that equal the target, I felt that a sort of nested loop approach was optimal for solving this problem. I used a nested for loop to help check all possible outcomes of two numbers that are in the array. Like the problem described, if they equaled the target integer then you print out the indices and then the program finishes. I created a size integer to hold the size of the array to help the for loops know the bounds to work within. As the algorithm goes, I just had an if statement that checked if the elements i and j when added together equaled target. If so, the program returned those elements of the array in the output that was asked for. This approach has a time complexity of O(N^2) which can be efficient for smaller arrays.

2) For this problem, I went with a similar approach as the first problem. Considering the question is asking you to find all the elements in the array that match the target integer. I created two variables "first", and "second" to track the where the beginning position is located and where the end position is in the array that contains the target integer value. Then, similar to the first problem, I had an integer "size" that kept track of the size of the array that was given to help with the for loop that followed. In the for loop, all that is being looked for is if the nums element i is equal to the target, then it becomes the first position if first is still equal to -1 (if it is that means there has been no change) and then the second position is equal to the end position which is located towards the end of the for loop. And then the output is just printed out the way the question asks. This approach has a time complexity of O(N). What makes it this is the fact that you are looping through the array. 

3) To help find the median of the two sorted arrays, for starters two already sorted arrays num1 and nums2 are initialized with m and n being their respected sizes. I have an integer "total" that is equal to the two sizes added together. Variables for the two median values were initialzed as "med1" and "med2" as well as initializing i and j to help with positioning in the for loop that follows. In the for loop, i and j are used to traverse elements in nums1 and nums2. For each iteration of the loop, the smallest element that can be found from nums1 and nums2 is picked and added to the curr variable. At the end of the problem, if the total number of elements is odd, the med2 value will be used as the median for the output. If the total number of elements comes out to be even, then the median is calculated to find the average between the values held in med1 and med2. This approach has a time complexity of O(m + n) considering that the choice of algorithm iterates through half the elements.



4) 



5)



