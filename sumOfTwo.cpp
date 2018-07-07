// You have two integer arrays, a and b, and an integer target value v.
// Determine whether there is a pair of numbers, where one number is
// taken from a and the other from b, that can be added together to get 
// a sum of v. Return true if such a pair exists, otherwise return false.

bool sumOfTwo(std::vector<int> a, std::vector<int> b, int v)
{
    sort(a.begin(),a.end());
    sort(b.begin(), b.end());
    
    for(int i=0; i< a.size(); i++)
    {
        for(int j = 0; j < b.size(); j++)
        {
            if(a[i] + b[j] == v)
                return true;
            
            //if a element is too small, continue
            if(a[i] + b[(b.size()-1)] < v)
                break;
            
            //if b elements too large, continue
            if(a[i] + b[j] > v)
                break;
        }
    }
    
    return false;
}