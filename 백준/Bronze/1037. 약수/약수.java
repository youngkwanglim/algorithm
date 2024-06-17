import java.io.*;
import java.util.Scanner;

class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int count = sc.nextInt();

        int[] list = new int[count];
        for (int i = 0; i < count; i++) {
            list[i] = sc.nextInt();
        }

        int max = 2;
        for (int i = 0; i < count; i++) {
            if (list[i] > max)
                max = list[i];
        }

        int min = 1000000;
        for (int i = 0; i < count; i++) {
            if (list[i] < min)
                min = list[i];
        }

        System.out.println(max*min);
    }
}