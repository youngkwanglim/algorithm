import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();

        int[] list = new int[a];
        int[] sum = new int[a+1];

        for (int i = 0; i < a; i++) {
            list[i] = sc.nextInt();
            if (i == 0){
                sum[i + 1] = list[i];
            }else {
                sum[i + 1] = sum[i] +list[i];
            }
         }

        for (int i = 0; i < b; i++) {
            int c = sc.nextInt() - 1;
            int d = sc.nextInt();

            int f = sum[d] - sum[c];
            System.out.println(f);
        }
    }
}
