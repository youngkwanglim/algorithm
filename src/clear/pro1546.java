package clear;

import java.util.Scanner;

public class pro1546 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int count = sc.nextInt();
        int[] major = new int[count];
        for (int i = 0; i < count; i++) {
            major[i] = sc.nextInt();
        }

        int max = 0;
        for (int i = 0; i < count; i++) {
            if (major[i] > max) {
                max = major[i];
            }
        }

        double[] major2 = new double[count];
        double sum=0;
        for (int i = 0; i < count; i++) {
            major2[i] = ((double) major[i] / max) * 100;
            sum += major2[i];
        }

        System.out.println(sum / count);
    }
}
