import java.util.Scanner;

public class pro2675 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int count = sc.nextInt();//총 몇개인지
        int num[]=new int[count];
        String str[]=new String[count];

        for (int i = 0; i < count; i++) {
            num[i] = sc.nextInt(); //3, 2
            str[i] = sc.nextLine(); //abcd, abc
            //출력은 aaabbbcccddd, aabbcc 가 되야됨

        }
        for (int i = 0; i < count; i++) {
            for (int j = 0; j < str[j].length(); j++) {
                for (int k = 0; k < num[k]; k++) {
                    System.out.print(str[i].charAt(j));
                }
            }
            System.out.println();
        }
    }
}
