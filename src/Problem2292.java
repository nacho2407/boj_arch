import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem2292 {
    public static void main(String[] args) throws Exception {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        int n = Integer.parseInt(br.readLine());

        isr.close();

        int room = 1;
        n -= 1;
        for(int i = 1; n > 0; i++) {
            room++;
            n -= 6 * i;
        }

        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);

        bw.write(room + "");

        bw.flush();

        osw.close();
    }
}
