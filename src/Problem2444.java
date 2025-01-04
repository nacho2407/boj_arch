import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem2444 {
    public static void main(String[] args) throws Exception {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        int n = Integer.parseInt(br.readLine());
        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);

        br.close();
        isr.close();

        for(int i = 0; i < n - 1; i++) {
            bw.write(" ");
        }
        bw.write("*");
        for(int j = n - 1; j > 0; j--) {
            bw.newLine();
            for(int i = 0; i < j - 1; i++) {
                bw.write(" ");
            }
            for(int i = 0; i < 2 * (n - j) + 1; i++) {
                bw.write("*");
            }
        }
        for(int j = 2; j < n + 1; j++) {
            bw.newLine();
            for(int i = 0; i < j - 1; i++) {
                bw.write(" ");
            }
            for(int i = 0; i < 2 * (n - j) + 1; i++) {
                bw.write("*");
            }
        }

        bw.flush();

        bw.close();
        osw.close();
    }
}
