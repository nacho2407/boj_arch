import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem10952 {
    public static void main(String[] args) throws Exception {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);
        String[] val = new String[2];
        int a, b;

        val = br.readLine().split(" ");
        a = Integer.parseInt(val[0]);
        b = Integer.parseInt(val[1]);
        for(; (a != b) || (a != 0); ) {
            bw.write(a + b + "\n");
            val = br.readLine().split(" ");
            a = Integer.parseInt(val[0]);
            b = Integer.parseInt(val[1]);
        }

        bw.flush();

        bw.close();
        osw.close();
        br.close();
        isr.close();
    }
}
