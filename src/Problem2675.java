import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem2675 {
    public static void main(String[] args) throws Exception {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        int t = Integer.parseInt(br.readLine());
        String[] sa;
        int r, length;
        StringBuffer s;
        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);
        
        for(int i = 0; i < t; i++) {
            sa = br.readLine().split(" ");
            r = Integer.parseInt(sa[0]);
            s = new StringBuffer(sa[1]);
            length = s.length();

            for(int j = 0; j < length; j++) {
                for(int k = 0; k < r; k++) {
                    bw.write(s.charAt(j) + "");
                }
            }

            bw.newLine();
        }

        br.close();
        isr.close();

        bw.flush();

        bw.close();
        osw.close();
    }
}
