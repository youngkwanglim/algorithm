import java.io.*;
import java.util.ArrayList;
import java.util.Scanner;

//53분 시작
class Main {
    public static final int MAX = 1000000;
    public static void main(String[] args) throws IOException {
        //Scanner sc = new Scanner(System.in);
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        boolean[] check = new boolean[MAX + 1];
        ArrayList<Integer> prime = new ArrayList<Integer>();
        check[0] = check[1] = true;
        for (int i = 2; i * i <= MAX; i++) {
            if (check[i] == true) {
                continue;
            }
            prime.add(i);
            for (int j = i + i; j <= MAX; j += i) {
                check[j] = true;
            }
        }
        while (true) {
            int n = Integer.parseInt(bf.readLine());
            if (n == 0) {
                break;
            }
            for (int i = 1; i < prime.size(); i++) {
                int p = prime.get(i);
                if (check[n - p] == false) {
                    //System.out.println(n + " = " + p + " + " + (n - p));
                    bw.write(n + " = " + p + " + " + (n - p) + "\n");
                    break;
                }
            }
        }
        bw.flush();
    }
}