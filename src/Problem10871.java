import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem10871 {
    public static void main(String[] args) throws Exception {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);
        String[] result;
        int cnt = 0;

        String[] vals = br.readLine().split(" ");
        result = new String[Integer.parseInt(vals[0])];
        int v = Integer.parseInt(vals[1]);

        vals = br.readLine().split(" ");

        br.close();
        isr.close();

        for(String s : vals) {
            if(Integer.parseInt(s) < v) {
                result[cnt] = s;
                cnt++;
            }
        }

        for(int i = 0; i < cnt - 1; i++) {
            bw.write(result[i] + " ");
        }
        bw.write(result[cnt - 1]);

        bw.flush();

        bw.close();
        osw.close();
    }
}
