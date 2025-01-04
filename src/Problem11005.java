import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.util.StringTokenizer;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem11005 {
    public static void main(String[] args) throws Exception {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        StringTokenizer st = new StringTokenizer(br.readLine());
        StringBuffer sb = new StringBuffer();

        isr.close();
        
        int n = Integer.parseInt(st.nextToken());
        int b = Integer.parseInt(st.nextToken());

        for(; n != 0; ) {
            int tmp = n % b;

            if(tmp > 9) {
                tmp += 'A' - 10;
            }
            else {
                tmp += '0';
            }

            sb.append((char) tmp);

            n /= b;
        }

        for(int i = 0; i < sb.length() / 2; i++) {
            char c = sb.charAt(i);
            sb.setCharAt(i, sb.charAt(sb.length() - 1 - i));
            sb.setCharAt(sb.length() - 1 - i, c);
        }

        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);

        bw.write(sb.toString());

        bw.flush();

        osw.close();
    }
}
