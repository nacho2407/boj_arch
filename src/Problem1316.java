import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem1316 {
    public static void main(String[] args) throws Exception {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        int num = Integer.parseInt(br.readLine()), j, length, c, count = 0;
        String s;
        int[] appeared;
        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);

        for(int i = 0; i < num; i++) {
            s = br.readLine();
            length = s.length();
            appeared = new int[26];
            
            c = s.charAt(0);
            appeared[c - 'a'] = 1;
            for(j = 1; j < length; j++) {
                c = s.charAt(j);
                if(c != s.charAt(j - 1)) {
                    if(appeared[c - 'a'] == 1) {
                        break;
                    }
                    else {
                        appeared[c - 'a'] = 1;
                    }
                }
            }

            if(j == length) {
                count++;
            }
        }

        br.close();
        isr.close();

        bw.write(count + "");

        bw.flush();

        bw.close();
        osw.close();
    }
}
