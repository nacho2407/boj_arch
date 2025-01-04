import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem11720 {
    public static void main(String[] args) throws Exception {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);
        int n = Integer.parseInt(br.readLine());
        StringBuffer sb = new StringBuffer(br.readLine());
        int sum = 0;

        br.close();
        isr.close();

        for(int i = 0; i < n; i++) {
            sum += sb.charAt(i) - '0';
        }

        bw.write(sum + "");

        bw.flush();

        bw.close();
        osw.close();
    }
}
