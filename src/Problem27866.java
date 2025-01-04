import java.io.InputStreamReader;
import java.io.BufferedReader;

public class Problem27866 {
    public static void main(String[] args) throws Exception {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        
        StringBuffer sb = new StringBuffer(br.readLine());
        int i = Integer.parseInt(br.readLine());

        br.close();
        isr.close();

        System.out.println(sb.charAt(i - 1));
    }
}
