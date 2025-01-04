import java.util.Scanner;

public class Problem5622 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String word = sc.nextLine();

        sc.close();

        int length = word.length();
        int time = 0;
        for(int i = 0; i < length; i++) {
            if('A' <= word.charAt(i) && word.charAt(i) <= 'C') {
                time += 3;
            }
            else if('D' <= word.charAt(i) && word.charAt(i) <= 'F') {
                time += 4;
            }
            else if('G' <= word.charAt(i) && word.charAt(i) <= 'I') {
                time += 5;
            }
            else if('J' <= word.charAt(i) && word.charAt(i) <= 'L') {
                time += 6;
            }
            else if('M' <= word.charAt(i) && word.charAt(i) <= 'O') {
                time += 7;
            }
            else if('P' <= word.charAt(i) && word.charAt(i) <= 'S') {
                time += 8;
            }
            else if('T' <= word.charAt(i) && word.charAt(i) <= 'V') {
                time += 9;
            }
            else {
                time += 10;
            }
        }

        System.out.println(time);

        sc.close();
    }
}
