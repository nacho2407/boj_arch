import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.util.StringTokenizer;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem1978 {
    public static void main(String[] args) throws Exception {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        int n = Integer.parseInt(br.readLine());
        StringTokenizer st = new StringTokenizer(br.readLine());
        int cnt = 0;

        for(int i = 0; i < n; i++) {
            int w = Integer.parseInt(st.nextToken());
            int j;
            for(j = 2; j < w; j++) {
                if(w % j == 0) {
                    break;
                }
            }

            if(j == w) {
                cnt++;
            }
        }

        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);

        bw.write(cnt + "");

        bw.flush();

        osw.close();
    }
}
