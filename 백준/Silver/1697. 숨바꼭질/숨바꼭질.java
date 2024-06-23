import java.util.*;

class Main {
    static final int MAX = 200000;
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        boolean[] check = new boolean[MAX];
        int[] dist = new int[MAX];
        check[n] = true;
        dist[n] = 0;
        Queue<Integer> q = new LinkedList<>();
        q.add(n);

        while (!q.isEmpty()) {
            int now = q.remove();
            if (now - 1 >= 0) {
                if (check[now - 1] == false) {
                    q.add(now - 1);
                    check[now - 1] = true;
                    dist[now - 1] = dist[now] + 1;
                }
            }
            if (now + 1 < MAX) {
                if (check[now + 1] == false) {
                    q.add(now + 1);
                    check[now + 1] = true;
                    dist[now + 1] = dist[now] + 1;
                }
            }
            if (2 * now < MAX) {
                if (check[2 * now] == false){
                    q.add(2 * now);
                    check[2 * now] = true;
                    dist[2 * now] = dist[now] + 1;
                }
            }
        }
        System.out.println(dist[k]);
    }
}

