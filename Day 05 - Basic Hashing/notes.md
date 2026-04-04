In hashing, there are two steps =>
1. Pre-store: 
    for number hashing: 
        int hash[13] = {0};      // we assumed the size of hash as 13 for   
                                    numbers 1 to 12.
        for (int i = 0; i < n; i++) {
            hash[arr[i]] += 1;
        }

    for alphabet hashing:
        there are 2 types; whether the string is only lowecase or uppercase and string contains both.
        1.
        let's say, s = 'abca'
        int hash[26] = {0}; // as no. of alphabets = 26.
        for (int i = 0; i < s.size(); i++) {
            hash[s[i] - 'a']++;  // 'a' represents it's ASCII number(97)
        }

        2. This method also works for first, so we will we using this.
        let's say, s= 'aBAc'
        int hash[256] = {0}; // as there are 256 total characters as per
                                ASCII.
        for (int i = 0; i < s.size(); i++) {
            hash[s[i]]++;
        }
2. Fetching:
    we will fetch the frequecies of alpha or num (i.e., how many times they appeared in the screen.)
    we won't be using 'for' loop everytime. We will do it CP way.

    int q; 
    cin >> q;
    while (q--) {
        /* for num:
        int num;
        cin >> num;
        
        // fetching:
        cout << hash[num] << endl;

        */

        /* for alpha (only lowecase or uppercase):
        char ch;
        cin >> ch;

        // fetching:
        cout << hash[ch - 'a'] << endl;
        */

        /* for both upper and lowercase alphabets: 
        char ch;
        cin >> ch;

        // fetching:
        cout << hash[ch] << endl;
    }

// we use hashing using map for larger numbers like 10^9 or higher.

// map hashing is more useful than array hashing as we are taking less space. for ex. in array -> {1, 2, 3, 4, 12}, max element in array is 12 which means we will have to take hash[13]. but in map, we won't.
it will take just '5' space.

// Time and Space complexity: 
1. for Array hashing:
   time: 
    Insert/update → O(1)
    Access → O(1)
   space:
    O(k), k = range of values; like {1, 2, 13, 4} => k = 14 (as array starts with 0)

2. for map hashing:
   time: Insert → O(log n)
         Access → O(log n)
         Search → O(log n)
    
    space: O(n)

3. for unordered_map hashing (we will use this first, if it gives TLE (time limit exceeded), then we will move on to map)

   time: Average → O(1)
         Worst case → O(n) (interviewers love to ask it. Reason: becuase of internal collision, happens rare though.)
    
    space: O(n)
