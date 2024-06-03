import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int input = Integer.parseInt(br.readLine());

        for (int i = 0; i < input; i++) {
            String token[] = br.readLine().split(",");
            int result = Integer.parseInt(token[0]) + Integer.parseInt(token[1]);
            System.out.println(result);
        }
    }
}