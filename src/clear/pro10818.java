package clear;

import java.util.Scanner;

public class pro10818 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int num = sc.nextInt();
        int list[] = new int[num];

        for (int i = 0; i < list.length; i++) {
            list[i] = sc.nextInt();
        }

        int min = list[0];
        int max = list[0];

        for (int i = 1; i < list.length; i++) {
            if(max < list[i])
                max = list[i];

            if (min > list[i])
                min = list[i];

        }

        System.out.println(min + " " + max);
    }
}
