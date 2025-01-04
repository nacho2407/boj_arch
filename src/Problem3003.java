import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem3003 {
    public static void main(String[] args) throws Exception {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        int[] original = {1, 1, 2, 2, 2, 8};
        String[] pieces = br.readLine().split(" ");
        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);

        br.close();
        isr.close();

        bw.write((original[0] - Integer.parseInt(pieces[0])) + "");

        for(int i = 1; i < original.length; i++) {
            bw.write(" " + (original[i] - Integer.parseInt(pieces[i])));
        }
        
        bw.flush();

        bw.close();
        osw.close();
    }
}
