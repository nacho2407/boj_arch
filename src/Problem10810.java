import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem10810 {
    public static void main(String[] args) throws Exception {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);
        int begin, end;

        String[] vals = br.readLine().split(" ");
        int n = Integer.parseInt(vals[0]);
        int m = Integer.parseInt(vals[1]);
        int[] basket = new int[n];

        for(int i = 0; i < m; i++) {
            vals = br.readLine().split(" ");
            begin = Integer.parseInt(vals[0]);
            end = Integer.parseInt(vals[1]);

            for(int j = begin - 1; j < end; j++) {
                basket[j] = Integer.parseInt(vals[2]);
            }
        }

        br.close();
        isr.close();

        for(int i = 0; i < n - 1; i++) {
            bw.write(basket[i] + " ");
        }
        bw.write(basket[n - 1] + "");

        bw.flush();

        bw.close();
        osw.close();
    }
}
