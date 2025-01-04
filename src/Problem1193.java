import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem1193 {
    public static void main(String[] args) throws Exception {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        int x = Integer.parseInt(br.readLine());

        isr.close();

        int row = 1;
        int col = 1;
        int rIncrement = -1;
        int cIncrement = 1;
        int flag = 0;
        for(; x > 1; x--) {
            if(row == 1 && flag == 0) {
                col++;
                rIncrement *= -1;
                cIncrement *= -1;
                flag = 1;
            }
            else if(col == 1 && flag == 0) {
                row++;
                rIncrement *= -1;
                cIncrement *= -1;
                flag = 1;
            }
            else {
                row += rIncrement;
                col += cIncrement;
                flag = 0;
            }   
        }

        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);

        bw.write(row + "/" + col);

        bw.flush();

        osw.close();
    }
}
