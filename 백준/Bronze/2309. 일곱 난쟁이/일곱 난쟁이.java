import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        boolean tf = false;

        ArrayList<Integer> people = new ArrayList<Integer>();
        int sum = 0;
        for (int i = 0; i < 9; i++) {
            int a = sc.nextInt();
            people.add(a);
            sum += a;
        }

        for (int i = 0; i < 9; i++) {
            for (int j = i + 1; j < 9; j++) {
                if (sum - people.get(i) - people.get(j) == 100) {
                    people.remove(j);
                    people.remove(i);
                    tf = true;
                    break;
                }
            }
            if (tf) {
                Collections.sort(people);
                break;
            }
        }

        for (int a : people) {
            System.out.println(a);
        }
    }
}