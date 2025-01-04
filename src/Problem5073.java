import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;
import java.util.StringTokenizer;
import java.util.Arrays;

public class Problem5073 {
    public static void main(String[] args) throws Exception {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);

        int[] sides = new int[3];

        for(int flag = 0; ; ) {
            if(flag == 0) {
                flag++;
            }
            else {
                bw.newLine();
            }
            
            StringTokenizer st = new StringTokenizer(br.readLine());

            for(int i = 0; i < sides.length; i++) {
                sides[i] = Integer.parseInt(st.nextToken());
            }

            Arrays.sort(sides);

            if((sides[0] + sides[1]) > sides[2]) {
                if(sides[0] == sides[1]) {
                    if(sides[1] == sides[2]) {
                        bw.write("Equilateral");
                    }
                    else {
                        bw.write("Isosceles");
                    }
                }
                else if(sides[1] == sides[2]) {
                    bw.write("Isosceles");
                }
                else {
                    bw.write("Scalene");
                }
            }
            else if(sides[2] == 0) {
                break;
            }
            else {
                bw.write("Invalid");
            }
        }

        isr.close();

        bw.flush();

        osw.close();
    }
}
