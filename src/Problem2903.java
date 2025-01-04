import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem2903 {
    public static void main(String[] args) throws Exception {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        
        int n = Integer.parseInt(br.readLine());

        isr.close();

        int p = 1;
        for(int i = 0; i < n; i++) {
            p *= 2;
        }

        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);

        bw.write((int) Math.pow(p + 1, 2) + "");

        bw.flush();

        osw.close();
    }
}
