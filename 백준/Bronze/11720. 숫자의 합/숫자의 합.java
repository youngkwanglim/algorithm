import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int count = Integer.parseInt(br.readLine());

        int sum = 0;
        String str = br.readLine();
        for (int i = 0; i < count; i++) {
            int a = str.charAt(i) - 48;
            sum += a;
        }
        bw.write(String.valueOf(sum));
        bw.flush();
        bw.close();
    }
}