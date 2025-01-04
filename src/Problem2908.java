import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem2908 {
    public static void main(String[] args) throws Exception {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        String[] sa = br.readLine().split(" ");
        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);
        
        br.close();
        isr.close();

        StringBuffer a = new StringBuffer(sa[0]);
        a.setCharAt(0, sa[0].charAt(a.length() - 1));
        a.setCharAt(a.length() - 1, sa[0].charAt(0));

        StringBuffer b = new StringBuffer(sa[1]);
        b.setCharAt(0, sa[1].charAt(b.length() - 1));
        b.setCharAt(b.length() - 1, sa[1].charAt(0));

        if(Integer.parseInt(a.toString()) > Integer.parseInt(b.toString())) {
            bw.write(a + "");
        }
        else {
            bw.write(b + "");
        }

        bw.flush();

        bw.close();
        osw.close();
    }
}
