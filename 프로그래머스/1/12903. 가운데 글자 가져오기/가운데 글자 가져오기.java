class Solution {
    public String solution(String s) {
        int length = s.length();
        String answer = "";
        if (length % 2 == 0) {
            answer = s.substring(length / 2 - 1, length / 2 + 1);
        } else {
            answer = String.valueOf(s.charAt(length / 2));
        }
        return answer;
    }
}