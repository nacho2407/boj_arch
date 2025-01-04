import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem10818 {
    public static void main(String[] args) throws Exception {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);
        int tmp;
        
        br.readLine();
        String[] vals = br.readLine().split(" ");

        br.close();
        isr.close();

        int max = Integer.parseInt(vals[0]);
        int min = max;

        for(int i = 1; i < vals.length; i++) {
            tmp = Integer.parseInt(vals[i]);

            if(max < tmp) {
                max = tmp;
            }

            if(tmp < min) {
                min = tmp;
            }
        }

        bw.write(min + " " + max);

        bw.flush();

        bw.close();
        osw.close();
    }
}
