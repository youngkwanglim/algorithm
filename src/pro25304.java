import java.util.Scanner;

public class pro25304 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int sum = sc.nextInt();
        int count = sc.nextInt();

        for (int i = 0; i < count; i++) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int gob = a * b;
            sum -= gob;
        }

        if (sum == 0) {
            System.out.println("Yes");
        }
        else
            System.out.println("No");
    }
}
