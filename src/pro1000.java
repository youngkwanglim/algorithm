import java.util.Scanner;

public class pro1000 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int A, B;

        System.out.print("A = ");
        A = scanner.nextInt();
        while(A>=10 || A<=0){
            System.out.print("A = ");
            A = scanner.nextInt();
        }

        System.out.print("B = ");
        B = scanner.nextInt();
        while(B>=10 || B<=0){
            System.out.print("B = ");
            B = scanner.nextInt();
        }

        System.out.println(A+B);
    }
}
