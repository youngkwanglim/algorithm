import java.io.*;
import java.util.Scanner;

class Main {
    public static int gcd(int x, int y) {
        if (y == 0) {
            return x;
        } else {
            return (gcd(y, x % y));
        }
    }
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();

        int gcd = gcd(a, b);
        int lcm = a * b / gcd;
        System.out.println(gcd);
        System.out.println(lcm);
    }
}