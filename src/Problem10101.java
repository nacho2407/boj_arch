import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem10101 {
    public static void main(String[] args) throws Exception {
        int[] angles = new int[3];
        int total = 0;
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);

        for(int i = 0; i < 3; i++) {
            angles[i] = Integer.parseInt(br.readLine());
            total += angles[i];
        }

        isr.close();

        String ans;

        if(total != 180) {
            ans = "Error";
        }
        else if(angles[0] == angles[1]) {
            if(angles[1] == angles[2]) {
                ans = "Equilateral";
            }
            else {
                ans = "Isosceles";
            }
        }
        else if(angles[1] == angles[2] || angles[0] == angles[2]) {
            ans = "Isosceles";
        }
        else {
            ans = "Scalene";
        }

        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);

        bw.write(ans);

        bw.flush();

        osw.close();
    }
}
