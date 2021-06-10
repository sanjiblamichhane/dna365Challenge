class Solution{
public:
	int maxResult(vector<int>& nums, int k)
	{
		deque<int> d;
		int n = nums.size();
		d.push_back(0);

	for(int i=1 ; i<n; i++)
    {
		if(d.front()+k < i)
			d.pop_front();

		nums[i] += nums[d.front()];

		while(!d.empty() && nums[d.back()] < nums[i])
			d.pop_back();
		d.push_back(i);
    }
		return nums[n-1];
	};
};
