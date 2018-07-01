// Given an array a that contains only numbers in the range from 1 to a.length, find the first duplicate number for which the second occurrence has the minimal index. In other words, if there are more than 1 duplicated numbers, return the number for which the second occurrence has a smaller index than the second occurrence of the other number does. If there are no such elements, return -1.

// Example

//     For a = [2, 1, 3, 5, 3, 2], the output should be
//     firstDuplicate(a) = 3.

//     There are 2 duplicates: numbers 2 and 3. The second occurrence of 3 has a smaller index than the second occurrence of 2 does, so the answer is 3.

//     For a = [2, 4, 3, 5, 1], the output should be
//     firstDuplicate(a) = -1.



int firstDuplicate(std::vector<int> a) {
    
    int maxElement = *(max_element(a.begin(), a.end()));

    vector<bool> dup(maxElement, false); //reference table

    
    for(int i = 0; i< a.size(); i++){
        int index = a.at(i);

        if(dup[index] != false){ //lookup
            return index; //return first duplicate
        }

        dup[index] = true; //flag in table
    }

    return -1; 
}

int main(){

   vector<int> v = {2,1,3,5,3,2};
   cout<< firstDuplicate(v) << endl;
   cerr << "done" << endl;

}