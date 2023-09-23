import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int a = 1;
        int b = 1;
        int c = 1;


        while (true) {
            a = sc.nextInt();
            b = sc.nextInt();
            c = sc.nextInt();
            if (a == 0 && b == 0 && c == 0) {
                break;
            }
            if (c * c == b * b + a * a ||
                    b * b == c * c + a * a ||
                    a * a == b * b + c * c) {
                System.out.println("right");
            } else{
            System.out.println("wrong");
            }
        }
    }
}
