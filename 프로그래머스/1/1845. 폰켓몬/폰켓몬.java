import java.util.HashSet;

class Solution {
    public int solution(int[] nums) {
        boolean[] list = new boolean[200001];
        int answer = 0;
        HashSet<Integer> hs = new HashSet<>();

        for (int i = 0; i < nums.length; i++) {
            hs.add(nums[i]);
        }
        answer = hs.size();
        
        if (answer > nums.length / 2) {
            answer = nums.length / 2;
        }

        return answer;
    }
}