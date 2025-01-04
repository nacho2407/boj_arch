import java.io.InputStreamReader;
import java.io.BufferedReader;

public class Problem1546 {
    public static void main(String[] args) throws Exception {
        final double MAX_SCORE = 100.;
        int i;
        double tmp;

        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        
        int n = Integer.parseInt(br.readLine());
        String[] sa = br.readLine().split(" ");

        br.close();
        isr.close();

        double[] scores = new double[n];

        double m = 0;
        for(i = 0; i < n; i++) {
            tmp = Double.parseDouble(sa[i]);

            if(m < tmp) {
                m = tmp;
            }

            scores[i] = tmp;
        }

        double sum = 0;
        for(i = 0; i < n; i++) {
            sum += scores[i] / m * MAX_SCORE;
        }

        System.out.println(sum / n);
    }
}
