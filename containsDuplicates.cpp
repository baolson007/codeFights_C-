// Given an array of integers, write a function that determines whether the array contains any duplicates. Your function should return true if any element appears at least twice in the array, and it should return false if every element is distinct.

// Example

//     For a = [1, 2, 3, 1], the output should be
//     containsDuplicates(a) = true.

//     There are two 1s in the given array.

//     For a = [3, 1], the output should be
//     containsDuplicates(a) = false.

//     The given array contains no duplicates.

// Input/Output

//     [execution time limit] 0.5 seconds (cpp)

//     [input] array.integer a

//     Guaranteed constraints:
//     0 ≤ a.length ≤ 105,
//     -2 · 109 ≤ a[i] ≤ 2 · 109.

//     [output] boolean

bool containsDuplicates(std::vector<int> a) {
    if (a.size() <=1)
        return false;
    sort(a.begin(), a.end());
    int dup = a[0];
    for(int i = 1; i < a.size(); i++){
        if (a[i] == dup)
            return true;
        else
            dup = a[i];
    }
    return false;
}