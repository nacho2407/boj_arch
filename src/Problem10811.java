import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem10811 {
    public static void main(String[] args) throws Exception {
        int k, i, j, tmp;

        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);

        String[] sa = br.readLine().split(" ");
        int n = Integer.parseInt(sa[0]);
        int m = Integer.parseInt(sa[1]);

        int[] basket = new int[n];
        for(k = 0; k < n; k++) {
            basket[k] = k + 1;
        }

        for(k = 0; k < m; k++) {
            sa = br.readLine().split(" ");
            i = Integer.parseInt(sa[0]) - 1;
            j = Integer.parseInt(sa[1]) - 1;

            for(int l = i, o = j; l <= o; l++, o--) {
                tmp = basket[l];
                basket[l] = basket[o];
                basket[o] = tmp;
            }
        }

        br.close();
        isr.close();

        for(k = 0; k < n - 1; k++) {
            bw.write(basket[k] + " ");
        }
        bw.write(basket[n - 1] + "");

        bw.flush();

        bw.close();
        osw.close();
    }
}
