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

        int[] list = new int[a];
        int[] sum = new int[a+1];

        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < a; i++) {
            list[i] = Integer.parseInt(st.nextToken());
            if (i == 0){
                sum[i + 1] = list[i];
            }else {
                sum[i + 1] = sum[i] +list[i];
            }
         }

        
        for (int i = 0; i < b; i++) {
            st = new StringTokenizer(br.readLine());
            int c = Integer.parseInt(st.nextToken()) - 1;
            int d = Integer.parseInt(st.nextToken());

            int f = sum[d] - sum[c];
            System.out.println(f);
        }
    }
}