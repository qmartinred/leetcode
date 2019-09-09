	// dp[0] = 0 
	// dp[1] = dp[0]+1 = 1
	// dp[2] = dp[1]+1 = 2
	// dp[3] = dp[2]+1 = 3
	// dp[4] = Min{ dp[4-1*1]+1, dp[4-2*2]+1 } 
	//       = Min{ dp[3]+1, dp[0]+1 } 
	//       = 1				
	// dp[5] = Min{ dp[5-1*1]+1, dp[5-2*2]+1 } 
	//       = Min{ dp[4]+1, dp[1]+1 } 
	//       = 2
	// 						.
	// 						.
	// 						.
	// dp[13] = Min{ dp[13-1*1]+1, dp[13-2*2]+1, dp[13-3*3]+1 } 
	//        = Min{ dp[12]+1, dp[9]+1, dp[4]+1 } 
	//        = 2
	// 						.
	// 						.
	// 						.
	// dp[n] = Min{ dp[n - i*i] + 1 },  n - i*i >=0 && i >= 1

class Solution {
public:
    int numSquares(int n) {
        if (n == 0) return 0;

        static vector<int> dp({0});

        while (dp.size() <= n)
        {
        	int size = dp.size();
        	int cnt = INT_MAX;
        	for (int i = 1; i*i <= size; i++)
        	{
        		cnt = min(cnt, dp[size - i*i] + 1);
        	}
        	dp.push_back(cnt);
        }

        return dp[n];
    }
};