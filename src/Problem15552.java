import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Problem15552 {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        String[] val;
        int a, b;

        int t = Integer.parseInt(br.readLine());

        for(int i = 0; i < t; i++) {
            val = br.readLine().split(" ");

            a = Integer.parseInt(val[0]);
            b = Integer.parseInt(val[1]);

            bw.write((a + b) + "\n");
        }

        bw.flush();
        
        br.close();
        bw.close();
    }
}
