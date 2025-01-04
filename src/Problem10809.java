import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem10809 {
    public static void main(String[] args) throws Exception {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        StringBuffer s = new StringBuffer(br.readLine());
        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);
        int length = s.length();
        int pos = -1;
        
        br.close();
        isr.close();

        for(int j = 0; j < length; j++) {
            if(s.charAt(j) == 'a') {
                pos = j;
                break;
            }
        }
        
        bw.write(pos + "");
        for(int i = 'b'; i <= 'z'; i++) {
            pos = -1;

            for(int j = 0; j < length; j++) {
                if(s.charAt(j) == i) {
                    pos = j;
                    break;
                }
            }
            
            bw.write(" " + pos);
        }

        bw.flush();

        bw.close();
        osw.close();
    }
}
