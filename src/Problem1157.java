import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem1157 {
    public static void main(String[] args) throws Exception {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        String s = br.readLine();
        int len = s.length();
        int i;
        char c;
        int max = 0;
        int dup = 0;
        int[] alp = new int[26];
        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);

        br.close();
        isr.close();

        for(i = 0; i < len; i++) {
            c = s.charAt(i);

            if('A' <= c && c <= 'Z') {
                alp[c - 'A']++;
            }
            else if('a' <= c && c <= 'z') {
                alp[c - 'a']++;
            }
        }

        for(i = 1; i < alp.length; i++) {
            if(alp[max] < alp[i]) {
                max = i;
                dup = 0;
            }
            else if(alp[max] == alp[i]) {
                dup = 1;
            }
        }

        c = 'A';
        c += max;

        if(dup == 1) {
            bw.write("?");
        }
        else {
            bw.write(c + "");
        }

        bw.flush();

        bw.close();
        osw.close();
    }
}
