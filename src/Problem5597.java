import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem5597 {
    public static void main(String[] args) throws Exception {
        final int STUDENTS = 30;
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);
        boolean[] submitted = new boolean[STUDENTS];
        int num;

        for(int i = 0; i < 28; i++) {
            num = Integer.parseInt(br.readLine()) - 1;
            submitted[num] = true;
        }

        br.close();
        isr.close();

        num = STUDENTS;
        for(int i = 0; i < STUDENTS; i++) {
            if(submitted[i] == false) {
                bw.write((i + 1) + "");
                num = i + 1;
                break;
            }
        }
        for(int i = num; i < STUDENTS; i++) {
            if(submitted[i] == false) {
                bw.write("\n" + (i + 1));
            }
        }

        bw.flush();

        bw.close();
        osw.close();
    }
}
