import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem2562 {
    public static void main(String[] args) throws Exception {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);

        int tmp = Integer.parseInt(br.readLine());
        int max = tmp;
        int index = 1;

        for(int i = index + 1; i <= 9; i++) {
            tmp = Integer.parseInt(br.readLine());

            if(max < tmp) {
                max = tmp;
                index = i;
            }
        }

        br.close();
        isr.close();

        bw.write(max + "\n" + index);

        bw.flush();

        bw.close();
        osw.close();
    }
}
