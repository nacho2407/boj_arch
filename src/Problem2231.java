import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Problem2231 {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());

        br.close();

        int i = 0;
        for(; i < n; i++) {
            if(i + sumOfPlace(i) == n) {
                break;
            }
        }

        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        if(i == n) {
            bw.write(0 + "");
        }
        else {
            bw.write(i + "");
        }

        bw.close();
    }

    static int sumOfPlace(int n) {
        int val = n;
        int sum = 0;

        for(; val != 0; ) {
            sum += val % 10;
            val /= 10;
        }

        return sum;
    }
}
