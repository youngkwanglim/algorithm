import java.io.*;
import java.util.StringTokenizer;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        int input = Integer.parseInt(br.readLine());

        for (int i = 0; i < input; i++) {
            st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            int result = a + b;
            String r = "Case #" + (i + 1) + ": " + a + " + " + b + " = " + result;
            bw.write(r);
            bw.newLine();
        }
        
        bw.flush();
        bw.close();
    }
}