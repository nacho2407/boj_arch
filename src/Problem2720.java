import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem2720 {
    public static void main(String[] args) throws Exception {
        final int[] COINS = {25, 10, 5, 1};
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);

        int t = Integer.parseInt(br.readLine());
        if(t != 0) {
            int c = Integer.parseInt(br.readLine());
            
            bw.write((c / COINS[0]) + "");
            c %= COINS[0];
            for(int j = 1; j < COINS.length; j++) {
                bw.write(" " + (c / COINS[j]));
                c %= COINS[j];
            }
        }
        for(int i = 1; i < t; i++) {
            bw.newLine();

            int c = Integer.parseInt(br.readLine());
            
            bw.write((c / COINS[0]) + "");
            c %= COINS[0];
            for(int j = 1; j < COINS.length; j++) {
                bw.write(" " + (c / COINS[j]));
                c %= COINS[j];
            }
        }

        isr.close();

        bw.flush();

        osw.close();
    }
}
