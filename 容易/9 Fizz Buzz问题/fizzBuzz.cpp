class Solution {
public:
    /**
     * param n: As description.
     * return: A list of strings.
     */
    vector<string> fizzBuzz(int n) {
        //write your code here
        vector<string> result;
        for(int i=1;i<=n;i++)
        {
            if(i%3==0)
            {
                if(i%5==0)
                    result.push_back("fizz buzz");
                else
                    result.push_back("fizz");
            }else if(i%5==0)
                result.push_back("buzz");
            else
                result.push_back(to_string(i));
        }
        return result;
    }
};