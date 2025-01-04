import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.util.StringTokenizer;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem25206 {
    public static void main(String[] args) throws Exception {
        final int NUM_SUBJECT = 20;
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        StringTokenizer st;
        double credit, totalCredit = 0, converted, totalGrade = 0, average;
        String grade;
        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);

        for(int i = 0; i < NUM_SUBJECT; i++) {
            st = new StringTokenizer(br.readLine());
            st.nextToken();
            credit = Double.parseDouble(st.nextToken());
            grade = st.nextToken();

            if(grade.equals("P")) {
                continue;
            }
            else if(grade.equals("F")) {
                converted = 0;
            }
            else {
                converted = 4 - (grade.charAt(0) - 'A');
                if(grade.charAt(1) == '+') {
                    converted += 0.5;
                }
            }
            totalCredit += credit;
            totalGrade += credit * converted;
        }

        br.close();
        isr.close();

        average = totalGrade / totalCredit;

        bw.write(average + "");

        bw.flush();

        bw.close();
        osw.close();
    }
}
