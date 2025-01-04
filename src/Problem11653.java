import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem11653 {
    public static void main(String[] args) throws Exception {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);

        int n = Integer.parseInt(br.readLine());
        if(n == 1) {
            return;
        }

        isr.close();

        for(int i = 2; i <= n; i++) {
            if(n % i == 0) {
                bw.write(i + "");
                n /= i;
                break;
            }
        }
        for(; n != 1; ) {
            for(int i = 2; i <= n; i++) {
                if(n % i == 0) {
                    bw.write("\n" + i);
                    n /= i;
                    break;
                }
            }
        }

        bw.flush();

        osw.close();
    }
}
