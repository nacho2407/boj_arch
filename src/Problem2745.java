import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.util.StringTokenizer;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem2745 {
    public static void main(String[] args) throws Exception {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        StringTokenizer st = new StringTokenizer(br.readLine());
        int res = 0;

        isr.close();

        String n = st.nextToken();
        int b = Integer.parseInt(st.nextToken());

        for(int i = 0; i < n.length(); i++) {
            char num = n.charAt(n.length() - 1 - i);

            if('A' <= num && num <= 'Z') {
                res += (num - 'A' + 10) * Math.pow(b, i);
            }
            else {
                res += (num - '0') * Math.pow(b, i);
            }
        }

        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);

        bw.write(res + "");

        bw.flush();

        osw.close();
    }
}
