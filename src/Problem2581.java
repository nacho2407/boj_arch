import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem2581 {
    public static void main(String[] args) throws Exception {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        int m = Integer.parseInt(br.readLine());
        int n = Integer.parseInt(br.readLine());
        int sum = 0;
        int min = -1;

        isr.close();

        for(int i = m; i <= n; i++) {
            int j;
            for(j = 2; j < i; j++) {
                if(i % j == 0) {
                    break;
                }
            }

            if(j == i) {
                if(min == -1) {
                    min = i;
                }

                sum += i;
            }
        }

        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);

        if(min != -1) {
            bw.write(sum + "\n");
        }
        bw.write(min + "");

        bw.flush();

        osw.close();
    }
}
