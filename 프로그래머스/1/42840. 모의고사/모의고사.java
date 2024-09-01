class Solution {
    public int[] solution(int[] answers) {
        int[] answer = { };
        int[] a = {1, 2, 3, 4, 5};
        int[] b = {2, 1, 2, 3, 2, 4, 2, 5};
        int[] c = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
        int c1 = 0;
        int c2 = 0;
        int c3 = 0;
        for (int i = 0; i < answers.length; i++) {
            if (answers[i] == a[i%a.length]) c1++;
            if (answers[i] == b[i%b.length]) c2++;
            if (answers[i] == c[i%c.length]) c3++;
        }

        if (c1 > c2 && c1 > c3) {
            answer = new int[]{1};
        } else if (c2 > c1 && c2 > c3) {
            answer = new int[]{2};
        } else if (c3 > c1 && c3 > c2) {
            answer = new int[]{3};
        } else if (c1 == c2 && c1 > c3) {
            answer = new int[]{1, 2};
        } else if (c2 == c3 && c2 > c1) {
            answer = new int[]{2, 3};
        } else if (c1 == c3 && c1 > c2) {
            answer = new int[]{1, 3};
        } else if (c1 == c2 && c2 == c3) {
            answer = new int[]{1, 2, 3};
        }

        return answer;
    }
}