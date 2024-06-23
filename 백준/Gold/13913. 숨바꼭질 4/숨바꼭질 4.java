import java.util.*;

class Main {
    static final int MAX = 200000;
    static final boolean[] check = new boolean[MAX];
    static final int[] dist = new int[MAX];
    static final int[] from = new int[MAX];
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();

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
                    from[now - 1] = now;
                    dist[now - 1] = dist[now] + 1;
                }
            }
            if (now + 1 < MAX) {
                if (check[now + 1] == false) {
                    q.add(now + 1);
                    check[now + 1] = true;
                    from[now + 1] = now;
                    dist[now + 1] = dist[now] + 1;
                }
            }
            if (2 * now < MAX) {
                if (check[2 * now] == false){
                    q.add(2 * now);
                    check[2 * now] = true;
                    from[2 * now] = now;
                    dist[2 * now] = dist[now] + 1;
                }
            }
        }
        System.out.println(dist[k]);
        printRoute(n, k);
    }

    private static void printRoute(int n, int k) {
        if (n != k) {
            printRoute(n, from[k]);
        }
        System.out.print(k + " ");
    }

}