import java.io.*;
import java.util.Scanner;

class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
    static boolean check[] = new boolean[10];
    static int ans[] = new int[10];
    static void pro(int index, int a, int b) throws IOException {

        if (index == b) {
            for (int i = 0; i < b; i++) {
                bw.write(ans[i] + " ");
                if (i == b - 1)
                { bw.write("\n");}
            }
        }
        for (int i = 1; i <= a; i++) {
            if (check[i]) continue;
            check[i] = true;
            ans[index] = i;
            pro(index + 1, a, b);
            check[i] = false;
        }
    }
    public static void main(String[] args) throws IOException {

        String[] line = br.readLine().split(" ");

        int a = Integer.parseInt(line[0]);
        int b = Integer.parseInt(line[1]);

        pro(0, a, b);
        bw.flush();

    }
}
