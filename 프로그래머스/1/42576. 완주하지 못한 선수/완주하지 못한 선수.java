import java.util.*;

class Solution {
    public String solution(String[] participant, String[] completion) {
        HashMap<String, Integer> players = new HashMap<>();
        
        for(String p : participant)
            players.put(p, players.getOrDefault(p, 0) + 1);
        
        for(String c : completion) {
            //players.put(c, players.getOrDefault(c, 0) - 1);
            int n = players.get(c) - 1;
            if(n == 0) players.remove(c);
            else players.put(c, n);
        }
        
        return players.keySet().iterator().next();
    }
}