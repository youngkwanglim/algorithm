import java.util.Scanner;

public class pro11720 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int count = sc.nextInt();
        int a = sc.nextInt();
        String k = Integer.toString(a);

        String k = sc.nextLine();
        int sum = 0;

        for (int i = 0; i < count; i++) {
            int h = Integer.parseInt(String.valueOf(k.charAt(i)));
//            int k = Integer.parseInt(b.substring(i));
            sum += h;
        }

        System.out.println(sum);
    }
}
