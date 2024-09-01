import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int num = sc.nextInt(); //5
        int sum = sc.nextInt(); //21

        int[] list = new int[num];
        for (int i = 0; i < num; i++) {
            list[i] = sc.nextInt();
        }

        int count = num * (num - 1) * (num - 2) / 6;
//        System.out.println("count = " + count);
        int[] list3 = new int[count];

        int h=0;
        for (int i = 0; i < num; i++) {
            for (int j = 1; j < num; j++) {
                for (int k = 2; k < num; k++) {
                    if (i < j && j < k) {
                        list3[h] = list[i] + list[j] + list[k];
                        h++;
                    }
                }
            }
        }

        int index = 0;
        int dif = sum;
        for (int i = 0; i < count; i++) {
            if (sum - list3[i] < dif && list3[i] <= sum) {
                dif = sum - list3[i];
                index = i;
            }
        }

        System.out.println(list3[index]);
    }
}
