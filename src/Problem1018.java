import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class Problem1018 {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int maxX = Integer.parseInt(st.nextToken());
        int maxY = Integer.parseInt(st.nextToken());
        char[][] board = new char[maxX][maxY];

        for(int i = 0; i < maxX; i++) {
            String tempString = br.readLine();
            for(int j = 0; j < maxY; j++) {
                board[i][j] = tempString.charAt(j);
            }
        }

        br.close();

        int min = maxX * maxY;

        for(int i = 0; i < maxX - 7; i++) {
            for(int j = 0; j < maxY - 7; j++) {
                int tempInt = countChange(board, i, j);
                if(tempInt < min) {
                    min = tempInt;
                }
            }
        }

        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        bw.write(min + "");

        bw.close();
    }

    static int countChange(char[][] board, int startX, int startY) {
        int firstCount = 0;
        char startColor = board[startX][startY];

        for(int i = startX; i < startX + 8; i++) {
            for(int j = startY; j < startY + 8; j++) {
                if((i % 2 == j % 2 && board[i][j] != startColor) || (i % 2 != j % 2 && board[i][j] == startColor)) {
                    firstCount++;
                }
            }
        }

        int secondCount = 0;

        for(int i = startX; i < startX + 8; i++) {
            for(int j = startY; j < startY + 8; j++) {
                if((i % 2 == j % 2 && board[i][j] == startColor) || (i % 2 != j % 2 && board[i][j] != startColor)) {
                    secondCount++;
                }
            }
        }

        return firstCount < secondCount ? firstCount : secondCount;
    }
}
