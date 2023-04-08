vector<int> answer;
    int leftproduct = 1;
    int rightproduct = 1;
    for (int i = 1; i < nums.size(); i++)
    {
        leftproduct = leftproduct * nums[i];
        answer[i] = leftproduct;
    }
    for (int i = nums.size() - 1; i > 0; i--)
    {
        rightproduct = rightproduct * nums[i];
        answer[i] = answer[i] * rightproduct;
    }