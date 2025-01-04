import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem9086 {
    public static void main(String[] args) throws Exception {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);
        int t = Integer.parseInt(br.readLine());
        StringBuffer sb = new StringBuffer(br.readLine());
        int end = sb.length() - 1;

        bw.write(sb.charAt(0) + "");
        bw.write(sb.charAt(end) + "");

        for(int i = 1; i < t; i++) {
            bw.newLine();

            sb = new StringBuffer(br.readLine());
            end = sb.length() - 1;

            bw.write(sb.charAt(0) + "");
            bw.write(sb.charAt(end) + "");
        }

        br.close();
        isr.close();

        bw.flush();

        bw.close();
        osw.close();
    }
}
