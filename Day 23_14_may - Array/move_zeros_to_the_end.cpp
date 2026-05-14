/*Move all Zeros to the end of the array

Problem Statement: You are given an array of integers, your task is to move all the zeros in the array 
to the end of the array and move non-negative integers to the front by maintaining their order.
Examples
Input: 1 ,0 ,2 ,3 ,0 ,4 ,0 ,1
Output: 1 ,2 ,3 ,4 ,1 ,0 ,0 ,0
Explanation: All the zeros are moved to the end and non-negative integers are moved to front by maintaining order
Input : 1,2,0,1,0,4,0
Output: 1,2,1,4,0,0,0*/


#include <bits/stdc++.h>
using namespace std;


vector<int> move_zeroes_to_end (vector<int>& arr) {
    int start = 0, next = start + 1, end = arr.size() - 1;
    while (start <= end && next <= end) {
        // to do 
    }
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    

    return 0;
}