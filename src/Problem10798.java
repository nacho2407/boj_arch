import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem10798 {
    public static void main(String[] args) throws Exception {
        final int ROW = 5;
        int i, j, length, maxLength = 0;
        String[] sa = new String[ROW];
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);

        for(i  = 0; i < ROW; i++) {
            sa[i] = br.readLine();
            
            length = sa[i].length();
            if(maxLength < length) {
                maxLength = length;
            }
        }

        isr.close();

        for(i = 0; i < maxLength; i++) {
            for(j = 0; j < ROW; j++) {
                if(i < sa[j].length()) {
                    bw.write(sa[j].charAt(i));
                }
            }
        }

        bw.flush();

        osw.close();
    }
}
