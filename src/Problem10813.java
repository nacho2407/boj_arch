import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem10813 {
    public static void main(String[] args) throws Exception {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);
        int a, b;

        String[] sa = br.readLine().split(" ");
        int n = Integer.parseInt(sa[0]);
        int m = Integer.parseInt(sa[1]);

        int[] basket = new int[n];
        int tmp = basket.length;
        for(int i = 0; i < tmp; i++) {
            basket[i] = i + 1;
        }

        for(int i = 0; i < m; i++) {
            sa = br.readLine().split(" ");
            a = Integer.parseInt(sa[0]) - 1;
            b = Integer.parseInt(sa[1]) - 1;
            
            tmp = basket[a];
            basket[a] = basket[b];
            basket[b] = tmp;
        }

        br.close();
        isr.close();

        tmp = basket.length;
        for(int i = 0; i < tmp - 1; i++) {
            bw.write(basket[i] + " ");
        }
        bw.write(basket[tmp - 1] + "");

        bw.flush();

        bw.close();
        osw.close();
    }
}
