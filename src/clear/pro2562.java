package clear;

import java.util.Scanner;

public class pro2562 {
    public static void main(String[] args) {
        int[] list = new int[9];
        Scanner sc = new Scanner(System.in);
        int max=0;
        int maxindex=0;

        for (int i = 0; i < list.length; i++) {
            list[i] = sc.nextInt();
            if (max < list[i]) {
                max = list[i];
                maxindex=i+1;
            }
        }

        System.out.println(max);
        System.out.println(maxindex);
    }
}
