import java.util.*;
class Solution {
    public String solution(String[] participant, String[] completion) {
        String answer = "";

        HashMap<String, Integer> hm = new HashMap<>();
        for (String par : participant) {
            hm.put(par, hm.getOrDefault(par, 0) + 1);
        }
        for (String com : completion) {
            hm.put(com, hm.get(com) - 1);
        }

        for (String k : hm.keySet()) {
            if (hm.get(k) != 0) {
                answer = k;
            }
        }
        return answer;
    }
}