import java.io.*;
import java.util.Scanner;

class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int m = sc.nextInt();
        int n = sc.nextInt();

        boolean[] k = new boolean[n+1];
        k[0] = k[1] = true;
        for (int i = 2; i*i <= n; i++) {
            if (k[i] == true) {
                continue;
            }
            for (int j = i + i; j <= n; j += i) {
                k[j] = true;
            }
        }


        for (int i = m; i <= n; i++) {
            if (k[i] == false) {
                System.out.println(i);
            }
        }

    }
}