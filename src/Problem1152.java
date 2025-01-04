import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem1152 {
    public static void main(String[] args) throws Exception {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        String[] sa = br.readLine().split(" ");
        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);
        int cnt = 0;

        br.close();
        isr.close();

        for(int i = 0; i < sa.length; i++) {
            if(!sa[i].equals("")) {
                cnt++;
            }
        }

        bw.write(cnt + "");

        bw.flush();

        bw.close();
        osw.close();
    }
}
