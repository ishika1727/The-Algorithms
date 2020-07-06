# Jump Search

Jump search is a combination of linear and binary search. Like Binary Search, it also works on sorted arrays. 
The idea is to Find range of element to be searched and the perform Linear Search in that range. This helps in decresing the number of searches as compared to Linear Search. It is also called block search algorithm.

### Time Complexity:O(√n)

The time complexity lies between O(n){Linear Search} and O(log n){Binary Search}

### Space Complexity: O(1)

### The Optimal block size to be skipped

Best Case: The element is in the first block;<BR>
Worst Case: The element in not in the array and it is greater than the largest element of the array. In this case me need to perform size_of_array(n)/size_of_block(jump) number of jumps and jump-1 comparisons for linear search and still the element is not found. Henceforth, total comparisons are (n/jump)+jump-1). So we take jump=√n.
<br><br>
Jump Search can be used in a case where element to be searched is very small(smallest in the array) as in such a case Binary Search may require <= O(Log n) jumps whereas Jump Search won't require these many jumps.