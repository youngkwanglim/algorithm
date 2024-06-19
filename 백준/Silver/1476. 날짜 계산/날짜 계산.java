import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();

        for (int i = 1; i <= 15 * 28 * 19; i++) {
            if (i % 15 == (a % 15) && i % 28 == (b % 28) && i % 19 == (c % 19)) {
                System.out.println(i);
                break;
            }
        }

    }
}