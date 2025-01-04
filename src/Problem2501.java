import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.util.ArrayList;
import java.util.StringTokenizer;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem2501 {
    public static void main(String[] args) throws Exception {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());
        int k = Integer.parseInt(st.nextToken());
        ArrayList<Integer> arr = new ArrayList<>();

        isr.close();

        for(int i = 1; i <= n; i++) {
            if(n % i == 0) {
                arr.add(i);
            }
        }

        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);

        if(arr.size() < k) {
            bw.write(0 + "");
        }
        else {
            bw.write(arr.get(k - 1) + "");
        }

        bw.flush();

        osw.close();
    }
}
