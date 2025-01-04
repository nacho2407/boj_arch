import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.util.StringTokenizer;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem3009 {
    public static void main(String[] args) throws Exception {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        StringTokenizer st;
        int[] x = new int[3];
        int[] y = new int[3];

        for(int i = 0; i < 3; i++) {
            st = new StringTokenizer(br.readLine());
            x[i] = Integer.parseInt(st.nextToken());
            y[i] = Integer.parseInt(st.nextToken());
        }
        
        isr.close();

        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);

        if(x[0] == x[1]) {
            bw.write(x[2] + " ");
        }
        else {
            if(x[0] == x[2]) {
                bw.write(x[1] + " ");
            }
            else {
                bw.write(x[0] + " ");
            }
        }

        if(y[0] == y[1]) {
            bw.write(y[2] + "");
        }
        else {
            if(y[0] == y[2]) {
                bw.write(y[1] + "");
            }
            else {
                bw.write(y[0] + "");
            }
        }

        bw.flush();

        osw.close();
    }
}
