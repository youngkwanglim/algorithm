import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int a = Integer.parseInt(st.nextToken());
        int b = Integer.parseInt(st.nextToken());

        int[][] box = new int[a][a];
        int[][] psum = new int[a+1][a+1];

        for (int i = 0; i < a; i++) {
            st = new StringTokenizer(br.readLine());
            for (int j = 0; j < a; j++) {
                box[i][j] = Integer.parseInt(st.nextToken());
            }
        }

        for (int i = 1; i <= a; i++) {
            for (int j = 1; j <= a; j++) {
                psum[i][j] = box[i-1][j-1] + psum[i - 1][j] + psum[i][j - 1] - psum[i - 1][j - 1];
            }
        }

        for (int j = 0; j < b; j++) {
            st = new StringTokenizer(br.readLine());
            int x1 = Integer.parseInt(st.nextToken());
            int y1 = Integer.parseInt(st.nextToken());
            int x2 = Integer.parseInt(st.nextToken());
            int y2 = Integer.parseInt(st.nextToken());

            int sum = psum[x2][y2] - psum[x2][y1-1] - psum[x1-1][y2] + psum[x1-1][y1-1];
            System.out.println(sum);
        }
    }
}
