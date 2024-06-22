class Solution {
    public int solution(int[] nums) {
        boolean[] list = new boolean[200001];
        int answer = 0;

        for (int i = 0; i < nums.length; i++) {
            for (int j = 0; j < nums.length; j++) {
                if (!list[nums[i]]) {
                    list[nums[i]] = true;
                    answer++;
                }
            }
        }
        if (answer > nums.length / 2) {
            answer = nums.length / 2;
        }
        
        return answer;
    }
}