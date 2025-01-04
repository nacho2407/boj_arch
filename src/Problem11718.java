import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem11718 {
    public static void main(String[] args) throws Exception {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);

        bw.write(br.readLine());
        for(String s = br.readLine(); s != ""; s = br.readLine()) {
            bw.newLine();
            bw.write(s);
        }

        isr.close();

        bw.flush();

        osw.close();
    }
}
