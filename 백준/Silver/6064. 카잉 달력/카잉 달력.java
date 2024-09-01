import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int T = sc.nextInt();

        for (int i = 0; i < T; i++) {
            int M = sc.nextInt();
            int N = sc.nextInt();
            int x = sc.nextInt();
            int y = sc.nextInt();
            x--;
            y--;
            boolean ok = false;
            for (int k = x; k < (M * N); k += M) {
                if (k % N == y) {
                    System.out.println(k + 1);
                    ok = true;
                    break;
                }
            }
            if (!ok) {
                System.out.println(-1);
            }
        }
    }
}