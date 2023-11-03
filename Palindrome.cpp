class Solution
{
	public:
		string is_palindrome(int n)
		{
		    int tmp = n;
		    int res = 0;
		    while(tmp!=0){
		        int tpl = tmp%10;
		        res = (res*10) + tpl;
		        tmp = tmp/10;
		    }
		    if(res == n) return "Yes";
		    else return "No";
		}
};
