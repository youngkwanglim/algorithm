import java.util.Arrays;

class Solution {
    public int[] solution(int[] array, int[][] commands) {
        int[] list = new int[commands.length];
        for (int i = 0; i < commands.length; i++) {
            int[] sub = Arrays.copyOfRange(array, commands[i][0] - 1, commands[i][1]);
            Arrays.sort(sub);
            list[i] = sub[commands[i][2] - 1];
        }

        return list;
    }
}