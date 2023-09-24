import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a= sc.nextInt();
        int[] b = new int[a];
        for (int i = 0; i < a; i++) {
            b[i] = sc.nextInt();
        }
        int count=0;
        int check=0;

        //소수인 경우
        for (int i = 0; i < a; i++) {
            check=0;
            for (int j = 1; j < b[i]; j++) {
                if (b[i]!=1 && b[i] % j == 0) {
                    check++;
                }

            }
            if (check == 1) {
                count++;
            }
        }

        System.out.println(count);
    }
}
