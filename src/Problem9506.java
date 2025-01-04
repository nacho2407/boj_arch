import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.util.ArrayList;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem9506 {
    public static void main(String[] args) throws Exception {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        ArrayList<Integer> arr = new ArrayList<>();
        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);

        for(int n = Integer.parseInt(br.readLine()), j = 0; n != -1; n = Integer.parseInt(br.readLine()), j++) {
            if(j != 0) {
                bw.newLine();
            }

            int sum = 0;
            for(int i = 1; i < n; i++) {
                if(n % i == 0) {
                    arr.add(i);
                    sum += i;
                }
            }

            if(n == sum) {
                bw.write(n + " = " + arr.get(0));
                for(int i = 1; i < arr.size(); i++) {
                    bw.write(" + " + arr.get(i));
                }
            }
            else {
                bw.write(n + " is NOT perfect.");
            }

            arr.clear();
        }

        isr.close();

        bw.flush();

        osw.close();
    }
}
