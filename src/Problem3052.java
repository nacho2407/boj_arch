import java.io.InputStreamReader;
import java.io.BufferedReader;

public class Problem3052 {
    public static void main(String[] args) throws Exception {
        final int DIVISOR = 42;
        final int VALUES = 10;
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        int count = 0;
        int i, j, val, r;
        
        int[] remainder = new int[VALUES];
        for(i = 0; i < VALUES; i++) {
            remainder[i] = DIVISOR;
        }

        for(i = 0; i < VALUES; i++) {
            val = Integer.parseInt(br.readLine());
            r = val % DIVISOR;
            
            for(j = 0; j < VALUES; j++) {
                if(remainder[j] == r) {
                    break;
                }
            }
            if(j == VALUES) {
                remainder[i] = r;
                count++;
            }
        }

        br.close();
        isr.close();

        System.out.println(count);
    }
}
