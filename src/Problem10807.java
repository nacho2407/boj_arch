import java.io.InputStreamReader;
import java.io.BufferedReader;

public class Problem10807 {
    public static void main(String[] args) throws Exception {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        int count = 0;

        br.readLine();
        String[] vals = br.readLine().split(" ");
        String v = br.readLine();

        br.close();
        isr.close();

        for(int i = 0; i < vals.length; i ++) {
            if(vals[i].equals(v)) {
                count++;
            }
        }

        System.out.println(count);
    }
}
