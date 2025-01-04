import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem11022 {
    public static void main(String[] args) throws Exception {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);
        int t = Integer.parseInt(br.readLine());
        String[] val = new String[2];
        int a, b;

        for(int i = 1; i <= t; i++) {
            val = br.readLine().split(" ");
            a = Integer.parseInt(val[0]);
            b = Integer.parseInt(val[1]);
            bw.write("Case #" + i + ": " + a + " + " + b + " = " + (a + b) + "\n");
        }

        bw.flush();

        bw.close();
        osw.close();
        br.close();
        isr.close();
    }
}
