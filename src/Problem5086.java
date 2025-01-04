import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.util.StringTokenizer;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem5086 {
    public static void main(String[] args) throws Exception {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);

        for(int i = 0; ; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());

            if(i != 0) {
                bw.newLine();
            }

            if(a == b) {
                break;
            }
            else if(a == 0 || b == 0) {
                bw.write("neither");
            }
            else if((double) a % b == 0) {
                bw.write("multiple");
            }
            else if((double) b % a == 0) {
                bw.write("factor");
            }
            else {
                bw.write("neither");
            }
        }

        bw.flush();

        osw.close();
    }
}
