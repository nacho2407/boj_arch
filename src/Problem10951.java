import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem10951 {
    public static void main(String[] args) throws Exception {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);
        String s;
        String[] val = new String[2];
        int a, b;

        s = br.readLine();
        for(; s != null; ) {
            val = s.split(" ");
            a = Integer.parseInt(val[0]);
            b = Integer.parseInt(val[1]);
            bw.write(a + b + "\n");
            s = br.readLine();
        }

        bw.flush();

        bw.close();
        osw.close();
        br.close();
        isr.close();
    }
}
