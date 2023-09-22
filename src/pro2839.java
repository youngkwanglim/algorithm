import java.util.Scanner;

public class pro2839 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int input = sc.nextInt();
        int count1 = 0;
        int count2 = 0;

        //입력을 받고 5로 나눠서 봉지를 정하고 나머지를 3으로
        //나눠서 추가적인 봉지를 정함.
        //그러고도 남는다면 -1을 반환할것

        //5로 딱떨어지면 그거 반환, 3딱 떨어지면 그거 반환

        if (input % 5 == 0) {
            count1 = input / 5;
        } else if (input % 3 == 0) {
            count1 = input / 3;
        }

        int pocket1 = input / 5;
        int pocket2 = (input - (pocket1 * 5)) / 3;
        count2 = pocket1 + pocket2;
        if ((input % 5) % 3 != 0) {
            count2 = -1;
        }

        if (count1 != 0 && count2 != -1) {
            if (count1 < count2) {
                count2 = count1;
            }
        }

        System.out.println(count2);

//        count += (input /= 5);
//        count += (input /= 3);
//        if(input%3 !=)
    }
}
