1. for is_arrays_sorted: 
     wrong approach:
     for (int i = 0; i < n; i++) {
        if (arr[i] > arr[i+1]); 
        ...
     }
     
    right approach: 
     for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i-1]) return false;
     }
