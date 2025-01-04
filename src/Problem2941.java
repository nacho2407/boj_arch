import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem2941 {
    public static void main(String[] args) throws Exception {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        String s = br.readLine();
        int len = s.length();
        int cnt = 0;
        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);

        br.close();
        isr.close();

        for(int i = 0; i < len; i++) {
            if(i < len - 1) {
                switch(s.substring(i, i + 2)) {
                    case "c=" :
                    case "c-" :
                    case "d-" :
                    case "lj" :
                    case "nj" :
                    case "s=" :
                    case "z=" :
                        i++;
                        break;
                    case "dz" :
                        if(i < len - 2 && s.charAt(i + 2) == '=') {
                            i += 2;
                        }
                        break;
                }
            }

            cnt++;
        }

        bw.write(cnt + "");

        bw.flush();

        bw.close();
        osw.close();
    }
}
