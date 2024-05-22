import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();

        int[] list = new int[a];
        int[] prefixSum = new int[a + 1]; // 누적 합을 저장할 배열. 배열의 크기를 a+1로 설정해서 인덱스 계산을 용이하게 함.

        for (int i = 0; i < a; i++) {
            list[i] = sc.nextInt();
            if (i == 0) {
                prefixSum[i + 1] = list[i]; // 첫 번째 원소의 누적 합은 자기 자신
            } else {
                prefixSum[i + 1] = prefixSum[i] + list[i]; // 현재 원소까지의 누적 합을 계산
            }
        }

        for (int i = 0; i < b; i++) {
            int c = sc.nextInt();
            int d = sc.nextInt();
            // c부터 d까지의 구간 합을 계산하기 위해 prefixSum[d] - prefixSum[c-1]을 계산
            System.out.println(prefixSum[d] - prefixSum[c - 1]);
        }

        sc.close();
    }
}