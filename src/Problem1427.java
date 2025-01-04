import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Arrays;

public class Problem1427 {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String s = br.readLine();

        br.close();

        int items[] = new int[s.length()];

        for(int i = 0; i < items.length; i++) {
            items[i] = s.charAt(i) - '0';
        }

        Arrays.sort(items);

        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        for(int i = items.length - 1; i >= 0; i--) {
            bw.write(items[i] + "");
        }

        bw.close();
    }
}
