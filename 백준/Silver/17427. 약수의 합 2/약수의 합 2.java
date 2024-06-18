import java.io.*;
import java.util.Scanner;

class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        long sum = 0;
        for (int i = 1; i <= a; i++) {
            sum += (a / i) * i;
        }
        System.out.println(sum);
    }
}