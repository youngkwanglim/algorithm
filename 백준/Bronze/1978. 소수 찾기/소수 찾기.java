import java.io.*;
import java.util.Scanner;

class Main {
    public static boolean check(int a) {
        if (a < 2) {
            return false;
        } else {
            for (int i = 2; i * i <= a; i++) {
                if (a % i == 0) {
                    return false;
                }
            }
            return true;
        }
    }
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int count = sc.nextInt();
        int result = 0;

        for (int i = 0; i < count; i++) {
            int k = sc.nextInt();
            if (check(k) == true) {
                result++;
            }
        }

        System.out.println(result);
    }
}